#pragma once

#ifdef LEAVERLIBRARYDINAMIC_EXPORTS
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif

#include <string>

namespace LeaverLibraryDinamic {
	class Leaver {
	public:
		///<summary>
		///Принимает на вход имя и возвращает прощание с именем
		/// <\summary>
		LEAVERLIBRARY_API std::string leave(const std::string _name);
	};
}
