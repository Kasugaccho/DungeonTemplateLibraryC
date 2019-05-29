/*#######################################################################################
	Copyright (c) 2017-2019 Kasugaccho
	Copyright (c) 2018-2019 As Project
	https://github.com/Kasugaccho/DungeonTemplateLibrary
	wanotaitei@gmail.com

	Distributed under the Boost Software License, Version 1.0. (See accompanying
	file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#######################################################################################*/
#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTLC_TYPE_TEMPLATE_H
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTLC_TYPE_TEMPLATE_H

#ifndef DTLC_TYPE_TEMPLATE

#ifdef __cplusplus

#define DTLC_TYPE_TEMPLATE template<typename Matrix_Int_, typename Matrix_>
#ifndef DTLC_TYPE_MATRIX_INT
#define DTLC_TYPE_MATRIX_INT const Matrix_Int_
#endif
#ifndef DTLC_TYPE_MATRIX
#define DTLC_TYPE_MATRIX Matrix_&
#endif
#ifndef DTLC_TYPE_MATRIX_BASE
#define DTLC_TYPE_MATRIX_BASE
#endif
#ifndef DTLC_TYPE_MATRIX_INIT
#define DTLC_TYPE_MATRIX_INIT
#endif

#else

#define DTLC_TYPE_TEMPLATE
#ifndef DTLC_TYPE_MATRIX_INT
#define DTLC_TYPE_MATRIX_INT int
#endif
#ifndef DTLC_TYPE_MATRIX
#define DTLC_TYPE_MATRIX DTLC_TYPE_MATRIX_INT**
#endif
#ifndef DTLC_TYPE_MATRIX_BASE
#define DTLC_TYPE_MATRIX_BASE DTLC_TYPE_MATRIX_INT*
#endif
#ifndef DTLC_TYPE_MATRIX_INIT
#define DTLC_TYPE_MATRIX_INIT DTLC_TYPE_MATRIX_INT***
#endif

#endif

#endif

#endif /*Included Dungeon Template Library*/