/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef GLOW_GLSL_GEN_HGLES3_GLES3
#define GLOW_GLSL_GEN_HGLES3_GLES3


#include "drivers/gles3/shader_gles3.h"


class GlowShaderGLES3 : public ShaderGLES3 {

public:

	enum Uniforms {
		VIEW,
		PIXEL_SIZE,
		LUMINANCE_MULTIPLIER,
		GLOW_BLOOM,
		GLOW_HDR_THRESHOLD,
		GLOW_HDR_SCALE,
		GLOW_LUMINANCE_CAP,
	};

	enum ShaderVariant {
		MODE_FILTER,
		MODE_DOWNSAMPLE,
		MODE_UPSAMPLE,
	};

	enum Specializations {
		USE_MULTIVIEW=1,
	};

	_FORCE_INLINE_ bool version_bind_shader(RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { return _version_bind_shader(p_version,p_variant,p_specialization); }

	_FORCE_INLINE_ int version_get_uniform(Uniforms p_uniform,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { return _version_get_uniform(p_uniform,p_version,p_variant,p_specialization); }

	#define _FU if (version_get_uniform(p_uniform,p_version,p_variant,p_specialization)<0) return; 

 	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, float p_value,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU glUniform1f(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),p_value); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, double p_value,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU glUniform1f(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),p_value); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, uint8_t p_value,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU glUniform1ui(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),p_value); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, int8_t p_value,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU glUniform1i(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),p_value); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, uint16_t p_value,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU glUniform1ui(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),p_value); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, int16_t p_value,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU glUniform1i(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),p_value); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, uint32_t p_value,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU glUniform1ui(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),p_value); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, int32_t p_value,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU glUniform1i(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),p_value); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, const Color& p_color,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU GLfloat col[4]={p_color.r,p_color.g,p_color.b,p_color.a}; glUniform4fv(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),1,col); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, const Vector2& p_vec2,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU GLfloat vec2[2]={float(p_vec2.x),float(p_vec2.y)}; glUniform2fv(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),1,vec2); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, const Size2i& p_vec2,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU GLint vec2[2]={GLint(p_vec2.x),GLint(p_vec2.y)}; glUniform2iv(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),1,vec2); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, const Vector3& p_vec3,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU GLfloat vec3[3]={float(p_vec3.x),float(p_vec3.y),float(p_vec3.z)}; glUniform3fv(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),1,vec3); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, const Vector4& p_vec4,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU GLfloat vec4[4]={float(p_vec4.x),float(p_vec4.y),float(p_vec4.z),float(p_vec4.w)}; glUniform4fv(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),1,vec4); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, float p_a, float p_b,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU glUniform2f(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),p_a,p_b); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, float p_a, float p_b, float p_c,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU glUniform3f(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),p_a,p_b,p_c); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, float p_a, float p_b, float p_c, float p_d,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) { _FU glUniform4f(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),p_a,p_b,p_c,p_d); }

	_FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, const Transform3D& p_transform,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) {  _FU

                const Transform3D &tr = p_transform;

                GLfloat matrix[16]={ /* build a 16x16 matrix */
                    (GLfloat)tr.basis.rows[0][0],
                    (GLfloat)tr.basis.rows[1][0],
                    (GLfloat)tr.basis.rows[2][0],
                    (GLfloat)0,
                    (GLfloat)tr.basis.rows[0][1],
                    (GLfloat)tr.basis.rows[1][1],
                    (GLfloat)tr.basis.rows[2][1],
                    (GLfloat)0,
                    (GLfloat)tr.basis.rows[0][2],
                    (GLfloat)tr.basis.rows[1][2],
                    (GLfloat)tr.basis.rows[2][2],
                    (GLfloat)0,
                    (GLfloat)tr.origin.x,
                    (GLfloat)tr.origin.y,
                    (GLfloat)tr.origin.z,
                    (GLfloat)1
                };

                        glUniformMatrix4fv(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),1,false,matrix);

            }

            _FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, const Transform2D& p_transform,RID p_version,ShaderVariant p_variant,uint64_t p_specialization=0) {  _FU

                const Transform2D &tr = p_transform;

            GLfloat matrix[16]={ /* build a 16x16 matrix */
                (GLfloat)tr.columns[0][0],
                (GLfloat)tr.columns[0][1],
                (GLfloat)0,
                (GLfloat)0,
                (GLfloat)tr.columns[1][0],
                (GLfloat)tr.columns[1][1],
                (GLfloat)0,
                (GLfloat)0,
                (GLfloat)0,
                (GLfloat)0,
                (GLfloat)1,
                (GLfloat)0,
                (GLfloat)tr.columns[2][0],
                (GLfloat)tr.columns[2][1],
                (GLfloat)0,
                (GLfloat)1
            };

                glUniformMatrix4fv(version_get_uniform(p_uniform,p_version,p_variant,p_specialization),1,false,matrix);

            }

            _FORCE_INLINE_ void version_set_uniform(Uniforms p_uniform, const Projection& p_matrix, RID p_version, ShaderVariant p_variant,uint64_t p_specialization=0) {  _FU

                GLfloat matrix[16];

                for (int i = 0; i < 4; i++) {
                    for (int j = 0; j < 4; j++) {
                        matrix[i * 4 + j] = p_matrix.columns[i][j];
                    }
                }

                glUniformMatrix4fv(version_get_uniform(p_uniform, p_version, p_variant, p_specialization), 1, false, matrix);
        }

#undef _FU


protected:

	virtual void _init() override {

		static const char* _uniform_strings[]={
			"view",
			"pixel_size",
			"luminance_multiplier",
			"glow_bloom",
			"glow_hdr_threshold",
			"glow_hdr_scale",
			"glow_luminance_cap",
		};

		static const char* _variant_defines[]={
			"#define MODE_FILTER",
			"#define MODE_DOWNSAMPLE",
			"#define MODE_UPSAMPLE",
		};

		static TexUnitPair _texunit_pairs[]={
			{"source_color",0},
		};

		static UBOPair *_ubo_pairs=nullptr;
		static Specialization _spec_pairs[]={
			{"USE_MULTIVIEW",false},
		};

		static const Feedback* _feedbacks=nullptr;
		static const char _vertex_code[]={
108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,118,101,99,50,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,111,117,116,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,117,118,95,105,110,116,101,114,112,32,61,32,118,101,114,116,101,120,95,97,116,116,114,105,98,32,42,32,48,46,53,32,43,32,48,46,53,59,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,99,52,40,118,101,114,116,101,120,95,97,116,116,114,105,98,44,32,49,46,48,44,32,49,46,48,41,59,10,125,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,102,102,32,42,47,10,		0};

		static const char _fragment_code[]={
47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,35,105,102,100,101,102,32,77,79,68,69,95,70,73,76,84,69,82,10,35,105,102,100,101,102,32,85,83,69,95,77,85,76,84,73,86,73,69,87,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,65,114,114,97,121,32,115,111,117,114,99,101,95,99,111,108,111,114,59,32,47,47,32,116,101,120,117,110,105,116,58,48,10,35,101,108,115,101,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,99,111,108,111,114,59,32,47,47,32,116,101,120,117,110,105,116,58,48,10,35,101,110,100,105,102,32,47,47,32,85,83,69,95,77,85,76,84,73,86,73,69,87,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,118,105,101,119,59,10,117,110,105,102,111,114,109,32,118,101,99,50,32,112,105,120,101,108,95,115,105,122,101,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,103,108,111,119,95,98,108,111,111,109,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,103,108,111,119,95,104,100,114,95,116,104,114,101,115,104,111,108,100,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,103,108,111,119,95,104,100,114,95,115,99,97,108,101,59,10,117,110,105,102,111,114,109,32,102,108,111,97,116,32,103,108,111,119,95,108,117,109,105,110,97,110,99,101,95,99,97,112,59,10,35,101,110,100,105,102,32,47,47,32,77,79,68,69,95,70,73,76,84,69,82,10,10,35,105,102,100,101,102,32,77,79,68,69,95,68,79,87,78,83,65,77,80,76,69,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,99,111,108,111,114,59,32,47,47,32,116,101,120,117,110,105,116,58,48,10,117,110,105,102,111,114,109,32,118,101,99,50,32,112,105,120,101,108,95,115,105,122,101,59,10,35,101,110,100,105,102,32,47,47,32,77,79,68,69,95,68,79,87,78,83,65,77,80,76,69,10,10,35,105,102,100,101,102,32,77,79,68,69,95,85,80,83,65,77,80,76,69,10,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,99,111,108,111,114,59,32,47,47,32,116,101,120,117,110,105,116,58,48,10,117,110,105,102,111,114,109,32,118,101,99,50,32,112,105,120,101,108,95,115,105,122,101,59,10,35,101,110,100,105,102,32,47,47,32,77,79,68,69,95,85,80,83,65,77,80,76,69,10,10,105,110,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,52,32,102,114,97,103,95,99,111,108,111,114,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,35,105,102,100,101,102,32,77,79,68,69,95,70,73,76,84,69,82,10,9,47,47,32,78,111,116,101,44,32,119,101,32,114,101,97,100,32,102,114,111,109,32,97,110,32,105,109,97,103,101,32,119,105,116,104,32,100,111,117,98,108,101,32,114,101,115,111,108,117,116,105,111,110,44,32,115,111,32,119,101,32,97,118,101,114,97,103,101,32,116,104,111,115,101,32,111,117,116,10,35,105,102,100,101,102,32,85,83,69,95,77,85,76,84,73,86,73,69,87,10,9,118,101,99,50,32,104,97,108,102,95,112,105,120,101,108,32,61,32,112,105,120,101,108,95,115,105,122,101,32,42,32,48,46,53,59,10,9,118,101,99,51,32,117,118,32,61,32,118,101,99,51,40,117,118,95,105,110,116,101,114,112,44,32,118,105,101,119,41,59,10,9,118,101,99,51,32,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,44,32,48,46,48,41,46,114,103,98,32,42,32,52,46,48,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,32,45,32,118,101,99,51,40,104,97,108,102,95,112,105,120,101,108,44,32,48,46,48,41,44,32,48,46,48,41,46,114,103,98,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,32,43,32,118,101,99,51,40,104,97,108,102,95,112,105,120,101,108,44,32,48,46,48,41,44,32,48,46,48,41,46,114,103,98,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,32,45,32,118,101,99,51,40,104,97,108,102,95,112,105,120,101,108,46,120,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,44,32,48,46,48,41,44,32,48,46,48,41,46,114,103,98,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,32,43,32,118,101,99,51,40,104,97,108,102,95,112,105,120,101,108,46,120,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,44,32,48,46,48,41,44,32,48,46,48,41,46,114,103,98,59,10,35,101,108,115,101,10,9,118,101,99,50,32,104,97,108,102,95,112,105,120,101,108,32,61,32,112,105,120,101,108,95,115,105,122,101,32,42,32,48,46,53,59,10,9,118,101,99,50,32,117,118,32,61,32,117,118,95,105,110,116,101,114,112,59,10,9,118,101,99,51,32,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,44,32,48,46,48,41,46,114,103,98,32,42,32,52,46,48,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,32,45,32,104,97,108,102,95,112,105,120,101,108,44,32,48,46,48,41,46,114,103,98,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,32,43,32,104,97,108,102,95,112,105,120,101,108,44,32,48,46,48,41,46,114,103,98,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,32,45,32,118,101,99,50,40,104,97,108,102,95,112,105,120,101,108,46,120,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,46,114,103,98,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,32,43,32,118,101,99,50,40,104,97,108,102,95,112,105,120,101,108,46,120,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,46,114,103,98,59,10,35,101,110,100,105,102,32,47,47,32,85,83,69,95,77,85,76,84,73,86,73,69,87,10,9,99,111,108,111,114,32,47,61,32,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,32,42,32,56,46,48,59,10,10,9,102,108,111,97,116,32,102,101,101,100,98,97,99,107,95,102,97,99,116,111,114,32,61,32,109,97,120,40,99,111,108,111,114,46,114,44,32,109,97,120,40,99,111,108,111,114,46,103,44,32,99,111,108,111,114,46,98,41,41,59,10,9,102,108,111,97,116,32,102,101,101,100,98,97,99,107,32,61,32,109,97,120,40,115,109,111,111,116,104,115,116,101,112,40,103,108,111,119,95,104,100,114,95,116,104,114,101,115,104,111,108,100,44,32,103,108,111,119,95,104,100,114,95,116,104,114,101,115,104,111,108,100,32,43,32,103,108,111,119,95,104,100,114,95,115,99,97,108,101,44,32,102,101,101,100,98,97,99,107,95,102,97,99,116,111,114,41,44,32,103,108,111,119,95,98,108,111,111,109,41,59,10,10,9,99,111,108,111,114,32,61,32,109,105,110,40,99,111,108,111,114,32,42,32,102,101,101,100,98,97,99,107,44,32,118,101,99,51,40,103,108,111,119,95,108,117,109,105,110,97,110,99,101,95,99,97,112,41,41,59,10,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,118,101,99,52,40,108,117,109,105,110,97,110,99,101,95,109,117,108,116,105,112,108,105,101,114,32,42,32,99,111,108,111,114,44,32,49,46,48,41,59,10,35,101,110,100,105,102,32,47,47,32,77,79,68,69,95,70,73,76,84,69,82,10,10,35,105,102,100,101,102,32,77,79,68,69,95,68,79,87,78,83,65,77,80,76,69,10,9,118,101,99,50,32,104,97,108,102,95,112,105,120,101,108,32,61,32,112,105,120,101,108,95,115,105,122,101,32,42,32,48,46,53,59,10,9,118,101,99,52,32,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,44,32,48,46,48,41,32,42,32,52,46,48,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,45,32,104,97,108,102,95,112,105,120,101,108,44,32,48,46,48,41,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,104,97,108,102,95,112,105,120,101,108,44,32,48,46,48,41,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,45,32,118,101,99,50,40,104,97,108,102,95,112,105,120,101,108,46,120,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,104,97,108,102,95,112,105,120,101,108,46,120,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,59,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,32,47,32,56,46,48,59,10,35,101,110,100,105,102,32,47,47,32,77,79,68,69,95,68,79,87,78,83,65,77,80,76,69,10,10,35,105,102,100,101,102,32,77,79,68,69,95,85,80,83,65,77,80,76,69,10,9,118,101,99,50,32,104,97,108,102,95,112,105,120,101,108,32,61,32,112,105,120,101,108,95,115,105,122,101,32,42,32,48,46,53,59,10,10,9,118,101,99,52,32,99,111,108,111,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,45,104,97,108,102,95,112,105,120,101,108,46,120,32,42,32,50,46,48,44,32,48,46,48,41,44,32,48,46,48,41,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,45,104,97,108,102,95,112,105,120,101,108,46,120,44,32,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,32,42,32,50,46,48,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,48,46,48,44,32,104,97,108,102,95,112,105,120,101,108,46,121,32,42,32,50,46,48,41,44,32,48,46,48,41,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,104,97,108,102,95,112,105,120,101,108,46,120,44,32,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,32,42,32,50,46,48,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,104,97,108,102,95,112,105,120,101,108,46,120,32,42,32,50,46,48,44,32,48,46,48,41,44,32,48,46,48,41,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,104,97,108,102,95,112,105,120,101,108,46,120,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,32,42,32,50,46,48,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,48,46,48,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,32,42,32,50,46,48,41,44,32,48,46,48,41,59,10,9,99,111,108,111,114,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,111,108,111,114,44,32,117,118,95,105,110,116,101,114,112,32,43,32,118,101,99,50,40,45,104,97,108,102,95,112,105,120,101,108,46,120,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,32,42,32,50,46,48,59,10,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,99,111,108,111,114,32,47,32,49,50,46,48,59,10,35,101,110,100,105,102,32,47,47,32,77,79,68,69,95,85,80,83,65,77,80,76,69,10,125,10,		0};

		_setup(_vertex_code,_fragment_code,"GlowShaderGLES3",7,_uniform_strings,0,_ubo_pairs,0,_feedbacks,1,_texunit_pairs,1,_spec_pairs,3,_variant_defines);
	}

};

#endif

