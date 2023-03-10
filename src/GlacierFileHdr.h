#ifndef _GLACIER_FILE_HDR
#define _GLACIER_FILE_HDR

#include "Converter.h"
#include "Vertex.h"

#include <string>
#include <vector>

enum ASSET_TYPE : uint32_t
{
	MODEL			  = 0b001,
	SKINNED_MODEL	  = 0b010,
	SKINNED_ANIMATION = 0b100
};

struct GlacierFileHdr
{
	std::string asset_name;
	uint32_t type = 0;
	uint32_t num_vertices = 0;
	uint32_t num_indices = 0;
	uint32_t num_textures = 0;
	uint32_t num_joints = 0;
	const Vertex* vertex_data;
	const uint32_t* indices;
	const Mat4* inverse_bind_matrices;
};

#endif