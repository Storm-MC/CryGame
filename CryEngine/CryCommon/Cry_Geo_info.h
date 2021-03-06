#include "Cry_Geo.h"

STRUCT_INFO_BEGIN(RectF)
	STRUCT_VAR_INFO(x, TYPE_INFO(float))
	STRUCT_VAR_INFO(y, TYPE_INFO(float))
	STRUCT_VAR_INFO(w, TYPE_INFO(float))
	STRUCT_VAR_INFO(h, TYPE_INFO(float))
STRUCT_INFO_END(RectF)

STRUCT_INFO_BEGIN(AABB)
	STRUCT_VAR_INFO(min, TYPE_INFO(Vec3))
	STRUCT_VAR_INFO(max, TYPE_INFO(Vec3))
STRUCT_INFO_END(AABB)

STRUCT_INFO_BEGIN(OBB)
	STRUCT_VAR_INFO(m33, TYPE_INFO(Matrix33))
	STRUCT_VAR_INFO(h, TYPE_INFO(Vec3))
	STRUCT_VAR_INFO(c, TYPE_INFO(Vec3))
STRUCT_INFO_END(OBB)

ENUM_INFO_BEGIN(EGeomType)
	ENUM_ELEM_INFO(, GeomType_None)
	ENUM_ELEM_INFO(, GeomType_BoundingBox)
	ENUM_ELEM_INFO(, GeomType_Physics)
	ENUM_ELEM_INFO(, GeomType_Render)
ENUM_INFO_END(EGeomType)

ENUM_INFO_BEGIN(EGeomForm)
	ENUM_ELEM_INFO(, GeomForm_Vertices)
	ENUM_ELEM_INFO(, GeomForm_Edges)
	ENUM_ELEM_INFO(, GeomForm_Surface)
	ENUM_ELEM_INFO(, GeomForm_Volume)
ENUM_INFO_END(EGeomForm)

