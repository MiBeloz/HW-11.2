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
		///��������� �� ���� ��� � ���������� �������� � ������
		/// <\summary>
		LEAVERLIBRARY_API std::string leave(const std::string _name);
	};
}
