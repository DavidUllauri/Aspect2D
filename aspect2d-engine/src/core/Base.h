#pragma once

#ifdef ASP_WINDOWS
	#ifdef ASP_LIB
		#define ASP_API __declspec(dllexport)
	#else
		#define ASP_API __declspec(dllimport)
	#endif
#else
	#define ASP_API
#endif

#ifdef ASP_DEBUG
	#define ASP_LOG(x) std::cout<<x<<std::endl;
#endif
