/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef CANVAS_OCCLUSION_GLSL_GEN_H_RD
#define CANVAS_OCCLUSION_GLSL_GEN_H_RD

#include "servers/rendering/renderer_rd/shader_rd.h"

class CanvasOcclusionShaderRD : public ShaderRD {

public:

	CanvasOcclusionShaderRD() {

		static const char _vertex_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,104,105,103,104,112,32,118,101,99,51,32,118,101,114,116,101,120,59,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,67,111,110,115,116,97,110,116,115,32,123,10,9,109,97,116,52,32,112,114,111,106,101,99,116,105,111,110,59,10,9,109,97,116,50,120,52,32,109,111,100,101,108,118,105,101,119,59,10,9,118,101,99,50,32,100,105,114,101,99,116,105,111,110,59,10,9,102,108,111,97,116,32,122,95,102,97,114,59,10,9,102,108,111,97,116,32,112,97,100,59,10,125,10,99,111,110,115,116,97,110,116,115,59,10,10,35,105,102,100,101,102,32,77,79,68,69,95,83,72,65,68,79,87,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,104,105,103,104,112,32,102,108,111,97,116,32,100,101,112,116,104,59,10,35,101,110,100,105,102,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,104,105,103,104,112,32,118,101,99,52,32,118,116,120,32,61,32,118,101,99,52,40,118,101,114,116,101,120,44,32,49,46,48,41,32,42,32,109,97,116,52,40,99,111,110,115,116,97,110,116,115,46,109,111,100,101,108,118,105,101,119,91,48,93,44,32,99,111,110,115,116,97,110,116,115,46,109,111,100,101,108,118,105,101,119,91,49,93,44,32,118,101,99,52,40,48,46,48,44,32,48,46,48,44,32,49,46,48,44,32,48,46,48,41,44,32,118,101,99,52,40,48,46,48,44,32,48,46,48,44,32,48,46,48,44,32,49,46,48,41,41,59,10,10,35,105,102,100,101,102,32,77,79,68,69,95,83,72,65,68,79,87,10,9,100,101,112,116,104,32,61,32,100,111,116,40,99,111,110,115,116,97,110,116,115,46,100,105,114,101,99,116,105,111,110,44,32,118,116,120,46,120,121,41,59,10,35,101,110,100,105,102,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,99,111,110,115,116,97,110,116,115,46,112,114,111,106,101,99,116,105,111,110,32,42,32,118,116,120,59,10,125,10,10,0
		};
		static const char _fragment_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,67,111,110,115,116,97,110,116,115,32,123,10,9,109,97,116,52,32,112,114,111,106,101,99,116,105,111,110,59,10,9,109,97,116,50,120,52,32,109,111,100,101,108,118,105,101,119,59,10,9,118,101,99,50,32,100,105,114,101,99,116,105,111,110,59,10,9,102,108,111,97,116,32,122,95,102,97,114,59,10,9,102,108,111,97,116,32,112,97,100,59,10,125,10,99,111,110,115,116,97,110,116,115,59,10,10,35,105,102,100,101,102,32,77,79,68,69,95,83,72,65,68,79,87,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,104,105,103,104,112,32,102,108,111,97,116,32,100,101,112,116,104,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,104,105,103,104,112,32,102,108,111,97,116,32,100,105,115,116,97,110,99,101,95,98,117,102,59,10,35,101,108,115,101,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,104,105,103,104,112,32,102,108,111,97,116,32,115,100,102,95,98,117,102,59,10,35,101,110,100,105,102,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,35,105,102,100,101,102,32,77,79,68,69,95,83,72,65,68,79,87,10,9,100,105,115,116,97,110,99,101,95,98,117,102,32,61,32,100,101,112,116,104,32,47,32,99,111,110,115,116,97,110,116,115,46,122,95,102,97,114,59,10,35,101,108,115,101,10,9,115,100,102,95,98,117,102,32,61,32,49,46,48,59,10,35,101,110,100,105,102,10,125,10,0
		};
		setup(_vertex_code, _fragment_code, nullptr, "CanvasOcclusionShaderRD");
	}
};

#endif
