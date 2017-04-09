#ifndef BM3_SDK_INC_BM3_CORE_MATRIX_BM3_POLICY_COLLISION_SIZE_CURVE_H
#define BM3_SDK_INC_BM3_CORE_MATRIX_BM3_POLICY_COLLISION_SIZE_CURVE_H

#include "../../bm3_Const.h"
#include "../../bm3_DrawInfo.h"
#include <ml/type/ml_vector3d.h>

namespace bm3{
BM3_BEGIN_PLATFORM_NAMESPACE

namespace policy{

namespace impl{

/// @brief Collision_Size_Curve�N���X
class Collision_Size_Curve{

public:
	template<typename ResourceType>
	static BM3_FORCEINLINE void	Initialize(const ResourceType &res, ml::random & /*random*/, ml::vector3d &size){
		if(res.Field_Size_FieldCollisionSizeType()==FieldCollisionSizeTypeConst_Curve){
			size = res.Field_Size_Curve().Value(0.0f);
		}
	}

	template<typename ResourceType, typename UpdateInfo>
	static BM3_FORCEINLINE void	Update(UpdateInfo &update_info, const ResourceType &res, ml::vector3d &size, const PrimitiveUpdateInfo &primitive_update_info){
		if(res.Field_Size_FieldCollisionSizeType()==FieldCollisionSizeTypeConst_Curve){
			size = res.Field_Size_Curve().Value(primitive_update_info.life_rate_);
		}
	}

	template<typename ResourceType ,typename FieldType>
	static void	Prepare(ml::vector3d &dst, DrawInfo &draw_info, const FieldType &field, const ResourceType &res, const ml::matrix44 &m){
		if(res.Field_Size_FieldCollisionSizeType()==FieldCollisionSizeTypeConst_Curve){
		}
	}
};

}	// namespace impl

}	// namespace policy
BM3_END_PLATFORM_NAMESPACE
}	// namespace bm3

#endif	// #ifndef BM3_SDK_INC_BM3_CORE_MATRIX_BM3_POLICY_COLLISION_SIZE_CURVE_H