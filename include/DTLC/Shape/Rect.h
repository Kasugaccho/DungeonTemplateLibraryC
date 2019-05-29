/*#######################################################################################
	Copyright (c) 2017-2019 Kasugaccho
	Copyright (c) 2018-2019 As Project
	https://github.com/Kasugaccho/DungeonTemplateLibrary
	wanotaitei@gmail.com

	Distributed under the Boost Software License, Version 1.0. (See accompanying
	file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
#######################################################################################*/
#ifndef INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTLC_SHAPE_RECT_H
#define INCLUDED_DUNGEON_TEMPLATE_LIBRARY_DTLC_SHAPE_RECT_H

#include <DTLC/Type/Namespace.h>
#include <DTLC/Type/Return.h>
#include <DTLC/Type/SizeT.h>
#include <DTLC/Type/Template.h>

DTLC_TYPE_NAMESPACE

DTLC_TYPE_TEMPLATE
DTLC_TYPE_RETURN drawRectMatrix(DTLC_TYPE_MATRIX_INT value_, DTLC_TYPE_MATRIX matrix_, DTLC_TYPE_SIZE size_x_, DTLC_TYPE_SIZE size_y_) {
	DTLC_TYPE_SIZE row = 0, col = 0;
	for (; row < size_y_; ++row)
		for (col = 0; col < size_x_; ++col)
			matrix_[row][col] = value_;
	return DTLC_TYPE_RETURN_TRUE;
}

DTLC_TYPE_NAMESPACE_END

#endif /*Included Dungeon Template Library*/