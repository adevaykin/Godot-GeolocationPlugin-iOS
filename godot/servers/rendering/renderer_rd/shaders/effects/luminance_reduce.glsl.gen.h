/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef LUMINANCE_REDUCE_GLSL_GEN_H_RD
#define LUMINANCE_REDUCE_GLSL_GEN_H_RD

#include "servers/rendering/renderer_rd/shader_rd.h"

class LuminanceReduceShaderRD : public ShaderRD {

public:

	LuminanceReduceShaderRD() {

		static const char _compute_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,35,100,101,102,105,110,101,32,66,76,79,67,75,95,83,73,90,69,32,56,10,10,108,97,121,111,117,116,40,108,111,99,97,108,95,115,105,122,101,95,120,32,61,32,66,76,79,67,75,95,83,73,90,69,44,32,108,111,99,97,108,95,115,105,122,101,95,121,32,61,32,66,76,79,67,75,95,83,73,90,69,44,32,108,111,99,97,108,95,115,105,122,101,95,122,32,61,32,49,41,32,105,110,59,10,10,115,104,97,114,101,100,32,102,108,111,97,116,32,116,109,112,95,100,97,116,97,91,66,76,79,67,75,95,83,73,90,69,32,42,32,66,76,79,67,75,95,83,73,90,69,93,59,10,10,35,105,102,100,101,102,32,82,69,65,68,95,84,69,88,84,85,82,69,10,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,116,101,120,116,117,114,101,59,10,10,35,101,108,115,101,10,10,10,108,97,121,111,117,116,40,114,51,50,102,44,32,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,114,101,115,116,114,105,99,116,32,114,101,97,100,111,110,108,121,32,105,109,97,103,101,50,68,32,115,111,117,114,99,101,95,108,117,109,105,110,97,110,99,101,59,10,10,35,101,110,100,105,102,10,10,108,97,121,111,117,116,40,114,51,50,102,44,32,115,101,116,32,61,32,49,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,114,101,115,116,114,105,99,116,32,119,114,105,116,101,111,110,108,121,32,105,109,97,103,101,50,68,32,100,101,115,116,95,108,117,109,105,110,97,110,99,101,59,10,10,35,105,102,100,101,102,32,87,82,73,84,69,95,76,85,77,73,78,65,78,67,69,10,108,97,121,111,117,116,40,115,101,116,32,61,32,50,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,112,114,101,118,95,108,117,109,105,110,97,110,99,101,59,10,35,101,110,100,105,102,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,80,97,114,97,109,115,32,123,10,9,105,118,101,99,50,32,115,111,117,114,99,101,95,115,105,122,101,59,10,9,102,108,111,97,116,32,109,97,120,95,108,117,109,105,110,97,110,99,101,59,10,9,102,108,111,97,116,32,109,105,110,95,108,117,109,105,110,97,110,99,101,59,10,9,102,108,111,97,116,32,101,120,112,111,115,117,114,101,95,97,100,106,117,115,116,59,10,9,102,108,111,97,116,32,112,97,100,91,51,93,59,10,125,10,112,97,114,97,109,115,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,117,105,110,116,32,116,32,61,32,103,108,95,76,111,99,97,108,73,110,118,111,99,97,116,105,111,110,73,68,46,121,32,42,32,66,76,79,67,75,95,83,73,90,69,32,43,32,103,108,95,76,111,99,97,108,73,110,118,111,99,97,116,105,111,110,73,68,46,120,59,10,9,105,118,101,99,50,32,112,111,115,32,61,32,105,118,101,99,50,40,103,108,95,71,108,111,98,97,108,73,110,118,111,99,97,116,105,111,110,73,68,46,120,121,41,59,10,10,9,105,102,32,40,97,110,121,40,108,101,115,115,84,104,97,110,40,112,111,115,44,32,112,97,114,97,109,115,46,115,111,117,114,99,101,95,115,105,122,101,41,41,41,32,123,10,35,105,102,100,101,102,32,82,69,65,68,95,84,69,88,84,85,82,69,10,9,9,118,101,99,51,32,118,32,61,32,116,101,120,101,108,70,101,116,99,104,40,115,111,117,114,99,101,95,116,101,120,116,117,114,101,44,32,112,111,115,44,32,48,41,46,114,103,98,59,10,9,9,116,109,112,95,100,97,116,97,91,116,93,32,61,32,109,97,120,40,118,46,114,44,32,109,97,120,40,118,46,103,44,32,118,46,98,41,41,59,10,35,101,108,115,101,10,9,9,116,109,112,95,100,97,116,97,91,116,93,32,61,32,105,109,97,103,101,76,111,97,100,40,115,111,117,114,99,101,95,108,117,109,105,110,97,110,99,101,44,32,112,111,115,41,46,114,59,10,35,101,110,100,105,102,10,9,125,32,101,108,115,101,32,123,10,9,9,116,109,112,95,100,97,116,97,91,116,93,32,61,32,48,46,48,59,10,9,125,10,10,9,103,114,111,117,112,77,101,109,111,114,121,66,97,114,114,105,101,114,40,41,59,10,9,98,97,114,114,105,101,114,40,41,59,10,10,9,117,105,110,116,32,115,105,122,101,32,61,32,40,66,76,79,67,75,95,83,73,90,69,32,42,32,66,76,79,67,75,95,83,73,90,69,41,32,62,62,32,49,59,10,10,9,100,111,32,123,10,9,9,105,102,32,40,116,32,60,32,115,105,122,101,41,32,123,10,9,9,9,116,109,112,95,100,97,116,97,91,116,93,32,43,61,32,116,109,112,95,100,97,116,97,91,116,32,43,32,115,105,122,101,93,59,10,9,9,125,10,9,9,103,114,111,117,112,77,101,109,111,114,121,66,97,114,114,105,101,114,40,41,59,10,9,9,98,97,114,114,105,101,114,40,41,59,10,10,9,9,115,105,122,101,32,62,62,61,32,49,59,10,9,125,32,119,104,105,108,101,32,40,115,105,122,101,32,62,61,32,49,41,59,10,10,9,105,102,32,40,116,32,61,61,32,48,41,32,123,10,9,9,10,9,9,105,118,101,99,50,32,114,101,99,116,95,115,105,122,101,32,61,32,109,105,110,40,112,97,114,97,109,115,46,115,111,117,114,99,101,95,115,105,122,101,32,45,32,112,111,115,44,32,105,118,101,99,50,40,66,76,79,67,75,95,83,73,90,69,41,41,59,10,9,9,102,108,111,97,116,32,97,118,103,32,61,32,116,109,112,95,100,97,116,97,91,48,93,32,47,32,102,108,111,97,116,40,114,101,99,116,95,115,105,122,101,46,120,32,42,32,114,101,99,116,95,115,105,122,101,46,121,41,59,10,9,9,10,9,9,112,111,115,32,47,61,32,105,118,101,99,50,40,66,76,79,67,75,95,83,73,90,69,41,59,10,35,105,102,100,101,102,32,87,82,73,84,69,95,76,85,77,73,78,65,78,67,69,10,9,9,102,108,111,97,116,32,112,114,101,118,95,108,117,109,32,61,32,116,101,120,101,108,70,101,116,99,104,40,112,114,101,118,95,108,117,109,105,110,97,110,99,101,44,32,105,118,101,99,50,40,48,44,32,48,41,44,32,48,41,46,114,59,32,10,9,9,97,118,103,32,61,32,99,108,97,109,112,40,112,114,101,118,95,108,117,109,32,43,32,40,97,118,103,32,45,32,112,114,101,118,95,108,117,109,41,32,42,32,112,97,114,97,109,115,46,101,120,112,111,115,117,114,101,95,97,100,106,117,115,116,44,32,112,97,114,97,109,115,46,109,105,110,95,108,117,109,105,110,97,110,99,101,44,32,112,97,114,97,109,115,46,109,97,120,95,108,117,109,105,110,97,110,99,101,41,59,10,35,101,110,100,105,102,10,9,9,105,109,97,103,101,83,116,111,114,101,40,100,101,115,116,95,108,117,109,105,110,97,110,99,101,44,32,112,111,115,44,32,118,101,99,52,40,97,118,103,41,41,59,10,9,125,10,125,10,0
		};
		setup(nullptr, nullptr, _compute_code, "LuminanceReduceShaderRD");
	}
};

#endif
