// THIS FILE IS AUTOMATICALLY GENERATED. DO NOT EDIT.
#ifndef BM3_SDK_INC_BM3_CORE_FILEFORMAT_BMB_IMAGE2DPROJECT_H
#define BM3_SDK_INC_BM3_CORE_FILEFORMAT_BMB_IMAGE2DPROJECT_H

#include <ml/type/ml_basic.h>
#include <ml/utility/ml_offset_pointer.h>
#include <ml/utility/ml_make_sign.h>
#include "../../utility/internal/bm3_MacroBegin.h"
#include "bm3_bmb_common.h"

namespace bm3{
BM3_BEGIN_PLATFORM_NAMESPACE
namespace fileformat{
namespace bmb{

struct Image2dProject{
	NodeHeader	node_header_;
	//
	BM3_DECLARE_GETTER_REF(StringType, Basic_Meta_Name);
	BM3_DECLARE_GETTER_REF(ml::color_rgba<float>, Basic_Meta_NodeColor);
	BM3_DECLARE_GETTER_VALUE(bool, Basic_Meta_Display);
	BM3_DECLARE_GETTER_VALUE(NodeTypeConst, Basic_Meta_NodeType);
	BM3_DECLARE_GETTER_VALUE(ml::si32, Basic_Meta_OptimizeBit);
	BM3_DECLARE_GETTER_VALUE(ml::si32, Basic_Meta_TotalLife);
public:
	int	Mapping(const wchar_t *string_chunk, const void *binary_chunk){
		Basic_Meta_Name_.Mapping(string_chunk);
		node_header_.ChildArray_.Mapping(binary_chunk);

		int	all_size = node_header_.byte_size_;
		{
			all_size += ChildNodeMapping::Execute(node_header_, string_chunk, binary_chunk);
		}
		return all_size;
	}
	typedef	NodeHeader::ChildArrayType_	ChildArrayType_;
	const ChildArrayType_	&ChildArray() const{
		return node_header_.ChildArray_;
	}
	ChildArrayType_	&ChildArray() {
		return node_header_.ChildArray_;
	}
};

#include "../../utility/internal/bm3_MacroEnd.h"
}	// namespace bmb
}	// namespace fileformat
BM3_END_PLATFORM_NAMESPACE
}	// namespace bm3

#endif	// BM3_SDK_INC_BM3_CORE_FILEFORMAT_BMB_IMAGE2DPROJECT_H
