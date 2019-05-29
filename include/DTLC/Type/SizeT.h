/*#######################################################################################
	Copyright (c) 2017-2019 Kasugaccho
	Copyright (c) 2018-2019 As Project
	https://github.com/Kasugaccho/DungeonTemplateLibrary
	wanotaitei@gmail.com

	Distributed under the Boost Software License, Version 1.0. (See accompanying
	file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#######################################################################################*/
#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTLC_TYPE_SIZE_T_H
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTLC_TYPE_SIZE_T_H

#ifndef DTLC_TYPE_SIZE

#ifdef __cplusplus

#if defined(UE_BUILD_FINAL_RELEASE) //UE4
#include <cstddef>
#define DTLC_TYPE_SIZE ::SIZE_T
#else
#include <cstddef>
#define DTLC_TYPE_SIZE ::std::size_t
#endif

#else

#include <stddef.h>
#define DTLC_TYPE_SIZE size_t

#endif

#endif

#endif /*Included Dungeon Template Library*/