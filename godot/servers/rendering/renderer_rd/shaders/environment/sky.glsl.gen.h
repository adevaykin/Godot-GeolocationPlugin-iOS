/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef SKY_GLSL_GEN_H_RD
#define SKY_GLSL_GEN_H_RD

#include "servers/rendering/renderer_rd/shader_rd.h"

class SkyShaderRD : public ShaderRD {

public:

	SkyShaderRD() {

		static const char _vertex_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,35,100,101,102,105,110,101,32,77,65,88,95,86,73,69,87,83,32,50,10,10,35,105,102,32,100,101,102,105,110,101,100,40,85,83,69,95,77,85,76,84,73,86,73,69,87,41,32,38,38,32,100,101,102,105,110,101,100,40,104,97,115,95,86,75,95,75,72,82,95,109,117,108,116,105,118,105,101,119,41,10,35,101,120,116,101,110,115,105,111,110,32,71,76,95,69,88,84,95,109,117,108,116,105,118,105,101,119,32,58,32,101,110,97,98,108,101,10,35,101,110,100,105,102,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,80,97,114,97,109,115,32,123,10,9,109,97,116,51,32,111,114,105,101,110,116,97,116,105,111,110,59,10,9,118,101,99,52,32,112,114,111,106,101,99,116,105,111,110,59,32,10,9,118,101,99,51,32,112,111,115,105,116,105,111,110,59,10,9,102,108,111,97,116,32,116,105,109,101,59,10,9,118,101,99,51,32,112,97,100,59,10,9,102,108,111,97,116,32,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,125,10,112,97,114,97,109,115,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,118,101,99,50,32,98,97,115,101,95,97,114,114,91,51,93,32,61,32,118,101,99,50,91,93,40,118,101,99,50,40,45,49,46,48,44,32,45,51,46,48,41,44,32,118,101,99,50,40,45,49,46,48,44,32,49,46,48,41,44,32,118,101,99,50,40,51,46,48,44,32,49,46,48,41,41,59,10,9,117,118,95,105,110,116,101,114,112,32,61,32,98,97,115,101,95,97,114,114,91,103,108,95,86,101,114,116,101,120,73,110,100,101,120,93,59,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,99,52,40,117,118,95,105,110,116,101,114,112,44,32,49,46,48,44,32,49,46,48,41,59,10,125,10,10,0
		};
		static const char _fragment_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,35,105,102,100,101,102,32,85,83,69,95,77,85,76,84,73,86,73,69,87,10,35,105,102,100,101,102,32,104,97,115,95,86,75,95,75,72,82,95,109,117,108,116,105,118,105,101,119,10,35,101,120,116,101,110,115,105,111,110,32,71,76,95,69,88,84,95,109,117,108,116,105,118,105,101,119,32,58,32,101,110,97,98,108,101,10,35,100,101,102,105,110,101,32,86,105,101,119,73,110,100,101,120,32,103,108,95,86,105,101,119,73,110,100,101,120,10,35,101,108,115,101,32,10,10,35,100,101,102,105,110,101,32,86,105,101,119,73,110,100,101,120,32,48,10,35,101,110,100,105,102,32,10,35,101,108,115,101,32,10,10,35,100,101,102,105,110,101,32,86,105,101,119,73,110,100,101,120,32,48,10,35,101,110,100,105,102,32,10,10,35,100,101,102,105,110,101,32,77,95,80,73,32,51,46,49,52,49,53,57,50,54,53,51,53,57,10,35,100,101,102,105,110,101,32,77,65,88,95,86,73,69,87,83,32,50,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,80,97,114,97,109,115,32,123,10,9,109,97,116,51,32,111,114,105,101,110,116,97,116,105,111,110,59,10,9,118,101,99,52,32,112,114,111,106,101,99,116,105,111,110,59,32,10,9,118,101,99,51,32,112,111,115,105,116,105,111,110,59,10,9,102,108,111,97,116,32,116,105,109,101,59,10,9,118,101,99,51,32,112,97,100,59,10,9,102,108,111,97,116,32,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,125,10,112,97,114,97,109,115,59,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,48,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,78,69,65,82,69,83,84,95,67,76,65,77,80,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,49,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,67,76,65,77,80,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,50,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,78,69,65,82,69,83,84,95,87,73,84,72,95,77,73,80,77,65,80,83,95,67,76,65,77,80,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,51,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,87,73,84,72,95,77,73,80,77,65,80,83,95,67,76,65,77,80,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,52,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,78,69,65,82,69,83,84,95,87,73,84,72,95,77,73,80,77,65,80,83,95,65,78,73,83,79,84,82,79,80,73,67,95,67,76,65,77,80,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,53,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,87,73,84,72,95,77,73,80,77,65,80,83,95,65,78,73,83,79,84,82,79,80,73,67,95,67,76,65,77,80,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,54,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,78,69,65,82,69,83,84,95,82,69,80,69,65,84,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,55,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,82,69,80,69,65,84,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,56,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,78,69,65,82,69,83,84,95,87,73,84,72,95,77,73,80,77,65,80,83,95,82,69,80,69,65,84,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,57,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,87,73,84,72,95,77,73,80,77,65,80,83,95,82,69,80,69,65,84,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,49,48,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,78,69,65,82,69,83,84,95,87,73,84,72,95,77,73,80,77,65,80,83,95,65,78,73,83,79,84,82,79,80,73,67,95,82,69,80,69,65,84,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,83,65,77,80,76,69,82,83,95,66,73,78,68,73,78,71,95,70,73,82,83,84,95,73,78,68,69,88,32,43,32,49,49,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,87,73,84,72,95,77,73,80,77,65,80,83,95,65,78,73,83,79,84,82,79,80,73,67,95,82,69,80,69,65,84,59,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,49,44,32,115,116,100,52,51,48,41,32,114,101,115,116,114,105,99,116,32,114,101,97,100,111,110,108,121,32,98,117,102,102,101,114,32,71,108,111,98,97,108,83,104,97,100,101,114,85,110,105,102,111,114,109,68,97,116,97,32,123,10,9,118,101,99,52,32,100,97,116,97,91,93,59,10,125,10,103,108,111,98,97,108,95,115,104,97,100,101,114,95,117,110,105,102,111,114,109,115,59,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,50,44,32,115,116,100,49,52,48,41,32,117,110,105,102,111,114,109,32,83,107,121,83,99,101,110,101,68,97,116,97,32,123,10,9,109,97,116,52,32,99,111,109,98,105,110,101,100,95,114,101,112,114,111,106,101,99,116,105,111,110,91,50,93,59,10,9,109,97,116,52,32,118,105,101,119,95,105,110,118,95,112,114,111,106,101,99,116,105,111,110,115,91,50,93,59,10,9,118,101,99,52,32,118,105,101,119,95,101,121,101,95,111,102,102,115,101,116,115,91,50,93,59,10,10,9,98,111,111,108,32,118,111,108,117,109,101,116,114,105,99,95,102,111,103,95,101,110,97,98,108,101,100,59,32,10,9,102,108,111,97,116,32,118,111,108,117,109,101,116,114,105,99,95,102,111,103,95,105,110,118,95,108,101,110,103,116,104,59,32,10,9,102,108,111,97,116,32,118,111,108,117,109,101,116,114,105,99,95,102,111,103,95,100,101,116,97,105,108,95,115,112,114,101,97,100,59,32,10,9,102,108,111,97,116,32,118,111,108,117,109,101,116,114,105,99,95,102,111,103,95,115,107,121,95,97,102,102,101,99,116,59,32,10,10,9,98,111,111,108,32,102,111,103,95,101,110,97,98,108,101,100,59,32,10,9,102,108,111,97,116,32,102,111,103,95,115,107,121,95,97,102,102,101,99,116,59,32,10,9,102,108,111,97,116,32,102,111,103,95,100,101,110,115,105,116,121,59,32,10,9,102,108,111,97,116,32,102,111,103,95,115,117,110,95,115,99,97,116,116,101,114,59,32,10,10,9,118,101,99,51,32,102,111,103,95,108,105,103,104,116,95,99,111,108,111,114,59,32,10,9,102,108,111,97,116,32,102,111,103,95,97,101,114,105,97,108,95,112,101,114,115,112,101,99,116,105,118,101,59,32,10,10,9,102,108,111,97,116,32,122,95,102,97,114,59,32,10,9,117,105,110,116,32,100,105,114,101,99,116,105,111,110,97,108,95,108,105,103,104,116,95,99,111,117,110,116,59,32,10,9,117,105,110,116,32,112,97,100,49,59,32,10,9,117,105,110,116,32,112,97,100,50,59,32,10,125,10,115,107,121,95,115,99,101,110,101,95,100,97,116,97,59,10,10,115,116,114,117,99,116,32,68,105,114,101,99,116,105,111,110,97,108,76,105,103,104,116,68,97,116,97,32,123,10,9,118,101,99,52,32,100,105,114,101,99,116,105,111,110,95,101,110,101,114,103,121,59,10,9,118,101,99,52,32,99,111,108,111,114,95,115,105,122,101,59,10,9,98,111,111,108,32,101,110,97,98,108,101,100,59,10,125,59,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,51,44,32,115,116,100,49,52,48,41,32,117,110,105,102,111,114,109,32,68,105,114,101,99,116,105,111,110,97,108,76,105,103,104,116,115,32,123,10,9,68,105,114,101,99,116,105,111,110,97,108,76,105,103,104,116,68,97,116,97,32,100,97,116,97,91,77,65,88,95,68,73,82,69,67,84,73,79,78,65,76,95,76,73,71,72,84,95,68,65,84,65,95,83,84,82,85,67,84,83,93,59,10,125,10,100,105,114,101,99,116,105,111,110,97,108,95,108,105,103,104,116,115,59,10,10,35,105,102,100,101,102,32,77,65,84,69,82,73,65,76,95,85,78,73,70,79,82,77,83,95,85,83,69,68,10,108,97,121,111,117,116,40,115,101,116,32,61,32,49,44,32,98,105,110,100,105,110,103,32,61,32,48,44,32,115,116,100,49,52,48,41,32,117,110,105,102,111,114,109,32,77,97,116,101,114,105,97,108,85,110,105,102,111,114,109,115,123,10,35,77,65,84,69,82,73,65,76,95,85,78,73,70,79,82,77,83,10,125,32,109,97,116,101,114,105,97,108,59,10,35,101,110,100,105,102,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,50,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,116,101,120,116,117,114,101,67,117,98,101,32,114,97,100,105,97,110,99,101,59,10,35,105,102,100,101,102,32,85,83,69,95,67,85,66,69,77,65,80,95,80,65,83,83,10,108,97,121,111,117,116,40,115,101,116,32,61,32,50,44,32,98,105,110,100,105,110,103,32,61,32,49,41,32,117,110,105,102,111,114,109,32,116,101,120,116,117,114,101,67,117,98,101,32,104,97,108,102,95,114,101,115,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,50,44,32,98,105,110,100,105,110,103,32,61,32,50,41,32,117,110,105,102,111,114,109,32,116,101,120,116,117,114,101,67,117,98,101,32,113,117,97,114,116,101,114,95,114,101,115,59,10,35,101,108,105,102,32,100,101,102,105,110,101,100,40,85,83,69,95,77,85,76,84,73,86,73,69,87,41,10,108,97,121,111,117,116,40,115,101,116,32,61,32,50,44,32,98,105,110,100,105,110,103,32,61,32,49,41,32,117,110,105,102,111,114,109,32,116,101,120,116,117,114,101,50,68,65,114,114,97,121,32,104,97,108,102,95,114,101,115,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,50,44,32,98,105,110,100,105,110,103,32,61,32,50,41,32,117,110,105,102,111,114,109,32,116,101,120,116,117,114,101,50,68,65,114,114,97,121,32,113,117,97,114,116,101,114,95,114,101,115,59,10,35,101,108,115,101,10,108,97,121,111,117,116,40,115,101,116,32,61,32,50,44,32,98,105,110,100,105,110,103,32,61,32,49,41,32,117,110,105,102,111,114,109,32,116,101,120,116,117,114,101,50,68,32,104,97,108,102,95,114,101,115,59,10,108,97,121,111,117,116,40,115,101,116,32,61,32,50,44,32,98,105,110,100,105,110,103,32,61,32,50,41,32,117,110,105,102,111,114,109,32,116,101,120,116,117,114,101,50,68,32,113,117,97,114,116,101,114,95,114,101,115,59,10,35,101,110,100,105,102,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,51,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,116,101,120,116,117,114,101,51,68,32,118,111,108,117,109,101,116,114,105,99,95,102,111,103,95,116,101,120,116,117,114,101,59,10,10,35,105,102,100,101,102,32,85,83,69,95,67,85,66,69,77,65,80,95,80,65,83,83,10,35,100,101,102,105,110,101,32,65,84,95,67,85,66,69,77,65,80,95,80,65,83,83,32,116,114,117,101,10,35,101,108,115,101,10,35,100,101,102,105,110,101,32,65,84,95,67,85,66,69,77,65,80,95,80,65,83,83,32,102,97,108,115,101,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,85,83,69,95,72,65,76,70,95,82,69,83,95,80,65,83,83,10,35,100,101,102,105,110,101,32,65,84,95,72,65,76,70,95,82,69,83,95,80,65,83,83,32,116,114,117,101,10,35,101,108,115,101,10,35,100,101,102,105,110,101,32,65,84,95,72,65,76,70,95,82,69,83,95,80,65,83,83,32,102,97,108,115,101,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,85,83,69,95,81,85,65,82,84,69,82,95,82,69,83,95,80,65,83,83,10,35,100,101,102,105,110,101,32,65,84,95,81,85,65,82,84,69,82,95,82,69,83,95,80,65,83,83,32,116,114,117,101,10,35,101,108,115,101,10,35,100,101,102,105,110,101,32,65,84,95,81,85,65,82,84,69,82,95,82,69,83,95,80,65,83,83,32,102,97,108,115,101,10,35,101,110,100,105,102,10,10,35,71,76,79,66,65,76,83,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,52,32,102,114,97,103,95,99,111,108,111,114,59,10,10,35,105,102,100,101,102,32,85,83,69,95,68,69,66,65,78,68,73,78,71,10,10,118,101,99,51,32,105,110,116,101,114,108,101,97,118,101,100,95,103,114,97,100,105,101,110,116,95,110,111,105,115,101,40,118,101,99,50,32,112,111,115,41,32,123,10,9,99,111,110,115,116,32,118,101,99,51,32,109,97,103,105,99,32,61,32,118,101,99,51,40,48,46,48,54,55,49,49,48,53,54,102,44,32,48,46,48,48,53,56,51,55,49,53,102,44,32,53,50,46,57,56,50,57,49,56,57,102,41,59,10,9,102,108,111,97,116,32,114,101,115,32,61,32,102,114,97,99,116,40,109,97,103,105,99,46,122,32,42,32,102,114,97,99,116,40,100,111,116,40,112,111,115,44,32,109,97,103,105,99,46,120,121,41,41,41,32,42,32,50,46,48,32,45,32,49,46,48,59,10,9,114,101,116,117,114,110,32,118,101,99,51,40,114,101,115,44,32,45,114,101,115,44,32,114,101,115,41,32,47,32,50,53,53,46,48,59,10,125,10,35,101,110,100,105,102,10,10,118,101,99,52,32,118,111,108,117,109,101,116,114,105,99,95,102,111,103,95,112,114,111,99,101,115,115,40,118,101,99,50,32,115,99,114,101,101,110,95,117,118,41,32,123,10,35,105,102,100,101,102,32,85,83,69,95,77,85,76,84,73,86,73,69,87,10,9,118,101,99,52,32,114,101,112,114,111,106,101,99,116,101,100,32,61,32,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,99,111,109,98,105,110,101,100,95,114,101,112,114,111,106,101,99,116,105,111,110,91,86,105,101,119,73,110,100,101,120,93,32,42,32,40,118,101,99,52,40,115,99,114,101,101,110,95,117,118,32,42,32,50,46,48,32,45,32,49,46,48,44,32,49,46,48,44,32,49,46,48,41,32,42,32,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,122,95,102,97,114,41,59,10,9,118,101,99,51,32,102,111,103,95,112,111,115,32,61,32,118,101,99,51,40,114,101,112,114,111,106,101,99,116,101,100,46,120,121,32,47,32,114,101,112,114,111,106,101,99,116,101,100,46,119,44,32,49,46,48,41,32,42,32,48,46,53,32,43,32,48,46,53,59,10,35,101,108,115,101,10,9,118,101,99,51,32,102,111,103,95,112,111,115,32,61,32,118,101,99,51,40,115,99,114,101,101,110,95,117,118,44,32,49,46,48,41,59,10,35,101,110,100,105,102,10,10,9,114,101,116,117,114,110,32,116,101,120,116,117,114,101,40,115,97,109,112,108,101,114,51,68,40,118,111,108,117,109,101,116,114,105,99,95,102,111,103,95,116,101,120,116,117,114,101,44,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,67,76,65,77,80,41,44,32,102,111,103,95,112,111,115,41,59,10,125,10,10,118,101,99,52,32,102,111,103,95,112,114,111,99,101,115,115,40,118,101,99,51,32,118,105,101,119,44,32,118,101,99,51,32,115,107,121,95,99,111,108,111,114,41,32,123,10,9,118,101,99,51,32,102,111,103,95,99,111,108,111,114,32,61,32,109,105,120,40,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,102,111,103,95,108,105,103,104,116,95,99,111,108,111,114,44,32,115,107,121,95,99,111,108,111,114,44,32,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,102,111,103,95,97,101,114,105,97,108,95,112,101,114,115,112,101,99,116,105,118,101,41,59,10,10,9,105,102,32,40,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,102,111,103,95,115,117,110,95,115,99,97,116,116,101,114,32,62,32,48,46,48,48,49,41,32,123,10,9,9,118,101,99,52,32,115,117,110,95,115,99,97,116,116,101,114,32,61,32,118,101,99,52,40,48,46,48,41,59,10,9,9,102,108,111,97,116,32,115,117,110,95,116,111,116,97,108,32,61,32,48,46,48,59,10,9,9,102,111,114,32,40,117,105,110,116,32,105,32,61,32,48,59,32,105,32,60,32,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,100,105,114,101,99,116,105,111,110,97,108,95,108,105,103,104,116,95,99,111,117,110,116,59,32,105,43,43,41,32,123,10,9,9,9,118,101,99,51,32,108,105,103,104,116,95,99,111,108,111,114,32,61,32,100,105,114,101,99,116,105,111,110,97,108,95,108,105,103,104,116,115,46,100,97,116,97,91,105,93,46,99,111,108,111,114,95,115,105,122,101,46,120,121,122,32,42,32,100,105,114,101,99,116,105,111,110,97,108,95,108,105,103,104,116,115,46,100,97,116,97,91,105,93,46,100,105,114,101,99,116,105,111,110,95,101,110,101,114,103,121,46,119,59,10,9,9,9,102,108,111,97,116,32,108,105,103,104,116,95,97,109,111,117,110,116,32,61,32,112,111,119,40,109,97,120,40,100,111,116,40,118,105,101,119,44,32,100,105,114,101,99,116,105,111,110,97,108,95,108,105,103,104,116,115,46,100,97,116,97,91,105,93,46,100,105,114,101,99,116,105,111,110,95,101,110,101,114,103,121,46,120,121,122,41,44,32,48,46,48,41,44,32,56,46,48,41,59,10,9,9,9,102,111,103,95,99,111,108,111,114,32,43,61,32,108,105,103,104,116,95,99,111,108,111,114,32,42,32,108,105,103,104,116,95,97,109,111,117,110,116,32,42,32,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,102,111,103,95,115,117,110,95,115,99,97,116,116,101,114,59,10,9,9,125,10,9,125,10,10,9,114,101,116,117,114,110,32,118,101,99,52,40,102,111,103,95,99,111,108,111,114,44,32,49,46,48,41,59,10,125,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,118,101,99,51,32,99,117,98,101,95,110,111,114,109,97,108,59,10,35,105,102,100,101,102,32,85,83,69,95,77,85,76,84,73,86,73,69,87,10,9,10,9,118,101,99,52,32,117,110,112,114,111,106,101,99,116,32,61,32,118,101,99,52,40,117,118,95,105,110,116,101,114,112,46,120,44,32,45,117,118,95,105,110,116,101,114,112,46,121,44,32,49,46,48,44,32,49,46,48,41,59,10,9,118,101,99,52,32,117,110,112,114,111,106,101,99,116,101,100,32,61,32,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,118,105,101,119,95,105,110,118,95,112,114,111,106,101,99,116,105,111,110,115,91,86,105,101,119,73,110,100,101,120,93,32,42,32,117,110,112,114,111,106,101,99,116,59,10,9,99,117,98,101,95,110,111,114,109,97,108,32,61,32,117,110,112,114,111,106,101,99,116,101,100,46,120,121,122,32,47,32,117,110,112,114,111,106,101,99,116,101,100,46,119,59,10,9,99,117,98,101,95,110,111,114,109,97,108,32,43,61,32,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,118,105,101,119,95,101,121,101,95,111,102,102,115,101,116,115,91,86,105,101,119,73,110,100,101,120,93,46,120,121,122,59,10,35,101,108,115,101,10,9,99,117,98,101,95,110,111,114,109,97,108,46,122,32,61,32,45,49,46,48,59,10,9,99,117,98,101,95,110,111,114,109,97,108,46,120,32,61,32,40,99,117,98,101,95,110,111,114,109,97,108,46,122,32,42,32,40,45,117,118,95,105,110,116,101,114,112,46,120,32,45,32,112,97,114,97,109,115,46,112,114,111,106,101,99,116,105,111,110,46,120,41,41,32,47,32,112,97,114,97,109,115,46,112,114,111,106,101,99,116,105,111,110,46,121,59,10,9,99,117,98,101,95,110,111,114,109,97,108,46,121,32,61,32,45,40,99,117,98,101,95,110,111,114,109,97,108,46,122,32,42,32,40,45,117,118,95,105,110,116,101,114,112,46,121,32,45,32,112,97,114,97,109,115,46,112,114,111,106,101,99,116,105,111,110,46,122,41,41,32,47,32,112,97,114,97,109,115,46,112,114,111,106,101,99,116,105,111,110,46,119,59,10,35,101,110,100,105,102,10,9,99,117,98,101,95,110,111,114,109,97,108,32,61,32,109,97,116,51,40,112,97,114,97,109,115,46,111,114,105,101,110,116,97,116,105,111,110,41,32,42,32,99,117,98,101,95,110,111,114,109,97,108,59,10,9,99,117,98,101,95,110,111,114,109,97,108,32,61,32,110,111,114,109,97,108,105,122,101,40,99,117,98,101,95,110,111,114,109,97,108,41,59,10,10,9,118,101,99,50,32,117,118,32,61,32,117,118,95,105,110,116,101,114,112,32,42,32,48,46,53,32,43,32,48,46,53,59,10,10,9,118,101,99,50,32,112,97,110,111,114,97,109,97,95,99,111,111,114,100,115,32,61,32,118,101,99,50,40,97,116,97,110,40,99,117,98,101,95,110,111,114,109,97,108,46,120,44,32,45,99,117,98,101,95,110,111,114,109,97,108,46,122,41,44,32,97,99,111,115,40,99,117,98,101,95,110,111,114,109,97,108,46,121,41,41,59,10,10,9,105,102,32,40,112,97,110,111,114,97,109,97,95,99,111,111,114,100,115,46,120,32,60,32,48,46,48,41,32,123,10,9,9,112,97,110,111,114,97,109,97,95,99,111,111,114,100,115,46,120,32,43,61,32,77,95,80,73,32,42,32,50,46,48,59,10,9,125,10,10,9,112,97,110,111,114,97,109,97,95,99,111,111,114,100,115,32,47,61,32,118,101,99,50,40,77,95,80,73,32,42,32,50,46,48,44,32,77,95,80,73,41,59,10,10,9,118,101,99,51,32,99,111,108,111,114,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,48,46,48,41,59,10,9,102,108,111,97,116,32,97,108,112,104,97,32,61,32,49,46,48,59,32,10,9,118,101,99,52,32,104,97,108,102,95,114,101,115,95,99,111,108,111,114,32,61,32,118,101,99,52,40,49,46,48,41,59,10,9,118,101,99,52,32,113,117,97,114,116,101,114,95,114,101,115,95,99,111,108,111,114,32,61,32,118,101,99,52,40,49,46,48,41,59,10,9,118,101,99,52,32,99,117,115,116,111,109,95,102,111,103,32,61,32,118,101,99,52,40,48,46,48,41,59,10,10,35,105,102,100,101,102,32,85,83,69,95,67,85,66,69,77,65,80,95,80,65,83,83,10,10,35,105,102,100,101,102,32,85,83,69,83,95,72,65,76,70,95,82,69,83,95,67,79,76,79,82,10,9,104,97,108,102,95,114,101,115,95,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,40,115,97,109,112,108,101,114,67,117,98,101,40,104,97,108,102,95,114,101,115,44,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,87,73,84,72,95,77,73,80,77,65,80,83,95,67,76,65,77,80,41,44,32,99,117,98,101,95,110,111,114,109,97,108,41,32,47,32,112,97,114,97,109,115,46,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,35,101,110,100,105,102,10,35,105,102,100,101,102,32,85,83,69,83,95,81,85,65,82,84,69,82,95,82,69,83,95,67,79,76,79,82,10,9,113,117,97,114,116,101,114,95,114,101,115,95,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,40,115,97,109,112,108,101,114,67,117,98,101,40,113,117,97,114,116,101,114,95,114,101,115,44,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,87,73,84,72,95,77,73,80,77,65,80,83,95,67,76,65,77,80,41,44,32,99,117,98,101,95,110,111,114,109,97,108,41,32,47,32,112,97,114,97,109,115,46,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,35,101,110,100,105,102,10,10,35,101,108,115,101,10,10,35,105,102,100,101,102,32,85,83,69,83,95,72,65,76,70,95,82,69,83,95,67,79,76,79,82,10,35,105,102,100,101,102,32,85,83,69,95,77,85,76,84,73,86,73,69,87,10,9,104,97,108,102,95,114,101,115,95,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,97,109,112,108,101,114,50,68,65,114,114,97,121,40,104,97,108,102,95,114,101,115,44,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,67,76,65,77,80,41,44,32,118,101,99,51,40,117,118,44,32,86,105,101,119,73,110,100,101,120,41,44,32,48,46,48,41,32,47,32,112,97,114,97,109,115,46,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,35,101,108,115,101,10,9,104,97,108,102,95,114,101,115,95,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,97,109,112,108,101,114,50,68,40,104,97,108,102,95,114,101,115,44,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,67,76,65,77,80,41,44,32,117,118,44,32,48,46,48,41,32,47,32,112,97,114,97,109,115,46,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,35,101,110,100,105,102,32,10,35,101,110,100,105,102,32,10,10,35,105,102,100,101,102,32,85,83,69,83,95,81,85,65,82,84,69,82,95,82,69,83,95,67,79,76,79,82,10,35,105,102,100,101,102,32,85,83,69,95,77,85,76,84,73,86,73,69,87,10,9,113,117,97,114,116,101,114,95,114,101,115,95,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,97,109,112,108,101,114,50,68,65,114,114,97,121,40,113,117,97,114,116,101,114,95,114,101,115,44,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,67,76,65,77,80,41,44,32,118,101,99,51,40,117,118,44,32,86,105,101,119,73,110,100,101,120,41,44,32,48,46,48,41,32,47,32,112,97,114,97,109,115,46,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,35,101,108,115,101,10,9,113,117,97,114,116,101,114,95,114,101,115,95,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,97,109,112,108,101,114,50,68,40,113,117,97,114,116,101,114,95,114,101,115,44,32,83,65,77,80,76,69,82,95,76,73,78,69,65,82,95,67,76,65,77,80,41,44,32,117,118,44,32,48,46,48,41,32,47,32,112,97,114,97,109,115,46,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,35,101,110,100,105,102,32,10,35,101,110,100,105,102,32,10,10,35,101,110,100,105,102,32,10,10,9,123,10,10,35,67,79,68,69,32,58,32,83,75,89,10,10,9,125,10,10,9,102,114,97,103,95,99,111,108,111,114,46,114,103,98,32,61,32,99,111,108,111,114,59,10,9,102,114,97,103,95,99,111,108,111,114,46,97,32,61,32,97,108,112,104,97,59,10,10,9,10,9,10,9,102,114,97,103,95,99,111,108,111,114,46,114,103,98,32,61,32,102,114,97,103,95,99,111,108,111,114,46,114,103,98,32,42,32,112,97,114,97,109,115,46,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,10,35,105,102,32,33,100,101,102,105,110,101,100,40,68,73,83,65,66,76,69,95,70,79,71,41,32,38,38,32,33,100,101,102,105,110,101,100,40,85,83,69,95,67,85,66,69,77,65,80,95,80,65,83,83,41,10,10,9,10,9,105,102,32,40,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,102,111,103,95,101,110,97,98,108,101,100,41,32,123,10,9,9,118,101,99,52,32,102,111,103,32,61,32,102,111,103,95,112,114,111,99,101,115,115,40,99,117,98,101,95,110,111,114,109,97,108,44,32,102,114,97,103,95,99,111,108,111,114,46,114,103,98,41,59,10,9,9,102,114,97,103,95,99,111,108,111,114,46,114,103,98,32,61,32,109,105,120,40,102,114,97,103,95,99,111,108,111,114,46,114,103,98,44,32,102,111,103,46,114,103,98,44,32,102,111,103,46,97,32,42,32,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,102,111,103,95,115,107,121,95,97,102,102,101,99,116,41,59,10,9,125,10,10,9,105,102,32,40,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,118,111,108,117,109,101,116,114,105,99,95,102,111,103,95,101,110,97,98,108,101,100,41,32,123,10,9,9,118,101,99,52,32,102,111,103,32,61,32,118,111,108,117,109,101,116,114,105,99,95,102,111,103,95,112,114,111,99,101,115,115,40,117,118,41,59,10,9,9,102,114,97,103,95,99,111,108,111,114,46,114,103,98,32,61,32,109,105,120,40,102,114,97,103,95,99,111,108,111,114,46,114,103,98,44,32,102,111,103,46,114,103,98,44,32,102,111,103,46,97,32,42,32,115,107,121,95,115,99,101,110,101,95,100,97,116,97,46,118,111,108,117,109,101,116,114,105,99,95,102,111,103,95,115,107,121,95,97,102,102,101,99,116,41,59,10,9,125,10,10,9,105,102,32,40,99,117,115,116,111,109,95,102,111,103,46,97,32,62,32,48,46,48,41,32,123,10,9,9,102,114,97,103,95,99,111,108,111,114,46,114,103,98,32,61,32,109,105,120,40,102,114,97,103,95,99,111,108,111,114,46,114,103,98,44,32,99,117,115,116,111,109,95,102,111,103,46,114,103,98,44,32,99,117,115,116,111,109,95,102,111,103,46,97,41,59,10,9,125,10,10,35,101,110,100,105,102,32,10,10,9,10,9,10,9,105,102,32,40,33,65,84,95,67,85,66,69,77,65,80,95,80,65,83,83,32,38,38,32,33,65,84,95,72,65,76,70,95,82,69,83,95,80,65,83,83,32,38,38,32,33,65,84,95,81,85,65,82,84,69,82,95,82,69,83,95,80,65,83,83,41,32,123,10,9,9,102,114,97,103,95,99,111,108,111,114,46,97,32,61,32,48,46,48,59,10,9,125,10,10,35,105,102,100,101,102,32,85,83,69,95,68,69,66,65,78,68,73,78,71,10,9,102,114,97,103,95,99,111,108,111,114,46,114,103,98,32,43,61,32,105,110,116,101,114,108,101,97,118,101,100,95,103,114,97,100,105,101,110,116,95,110,111,105,115,101,40,103,108,95,70,114,97,103,67,111,111,114,100,46,120,121,41,32,42,32,112,97,114,97,109,115,46,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,35,101,110,100,105,102,10,125,10,0
		};
		setup(_vertex_code, _fragment_code, nullptr, "SkyShaderRD");
	}
};

#endif
