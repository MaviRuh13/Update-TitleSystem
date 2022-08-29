// Arat // Search //

#ifdef ENABLE_TITLE_SYSTEM
	int iPrestigeGrade = GetPrestigeGrade();	
	
	if (TITLE_NONE_PRESTIGE == iPrestigeGrade)
	{
		CPythonTextTail::Instance().DetachPrestige_(GetVirtualID());
	}
	else
		{
		std::map<int, std::string>::iterator itor2_vegas = g_TitlePrestigeNameMap.find(iPrestigeGrade);
		if (g_TitlePrestigeNameMap.end() != itor2_vegas)
		{
			const std::string & c_rstrTitlePrestigeName = itor2_vegas->second;
			CPythonTextTail::Instance().AttachPrestige_(GetVirtualID(), c_rstrTitlePrestigeName.c_str(), GetTitlePrestigeColor());
		}
	}
#endif	

// Degistir // Change //

#ifdef ENABLE_TITLE_SYSTEM
	int iPrestigeGrade = GetPrestigeGrade();
	if (IsPC())
	{
		std::map<int, std::string>::iterator itor2_vegas = g_TitlePrestigeNameMap.find(iPrestigeGrade);
		if (g_TitlePrestigeNameMap.end() != itor2_vegas)
		{
			const std::string & c_rstrTitlePrestigeName = itor2_vegas->second;
			CPythonTextTail::Instance().AttachPrestige_(GetVirtualID(), c_rstrTitlePrestigeName.c_str(), GetTitlePrestigeColor());
		}
	}
#endif
