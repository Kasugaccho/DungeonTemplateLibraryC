/*#######################################################################################
	Copyright (c) 2017-2019 Kasugaccho
	Copyright (c) 2018-2019 As Project
	https://github.com/Kasugaccho/DungeonTemplateLibrary
	wanotaitei@gmail.com

	Distributed under the Boost Software License, Version 1.0. (See accompanying
	file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#######################################################################################*/
#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTLC_TYPE_RETURN_H
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTLC_TYPE_RETURN_H

#ifndef DTLC_TYPE_RETURN

#ifdef __cplusplus

#define DTLC_TYPE_RETURN bool
#ifndef DTLC_TYPE_RETURN_TRUE
#define DTLC_TYPE_RETURN_TRUE (true)
#endif
#ifndef DTLC_TYPE_RETURN_FALSE
#define DTLC_TYPE_RETURN_FALSE (false)
#endif

#else

#define DTLC_TYPE_RETURN int
#ifndef DTLC_TYPE_RETURN_TRUE
#define DTLC_TYPE_RETURN_TRUE (1)
#endif
#ifndef DTLC_TYPE_RETURN_FALSE
#define DTLC_TYPE_RETURN_FALSE (0)
#endif

#endif

#endif

#endif /*Included Dungeon Template Library*/