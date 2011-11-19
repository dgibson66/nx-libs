"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"__fixed_output vec4 gl_Position;\n"
"__fixed_output float gl_PointSize;\n"
"__fixed_output vec4 gl_ClipVertex;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"attribute vec4 gl_Color;\n"
"attribute vec4 gl_SecondaryColor;\n"
"attribute vec3 gl_Normal;\n"
"attribute vec4 gl_Vertex;\n"
"attribute vec4 gl_MultiTexCoord0;\n"
"attribute vec4 gl_MultiTexCoord1;\n"
"attribute vec4 gl_MultiTexCoord2;\n"
"attribute vec4 gl_MultiTexCoord3;\n"
"attribute vec4 gl_MultiTexCoord4;\n"
"attribute vec4 gl_MultiTexCoord5;\n"
"attribute vec4 gl_MultiTexCoord6;\n"
"attribute vec4 gl_MultiTexCoord7;\n"
"attribute float gl_FogCoord;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"varying vec4 gl_FrontColor;\n"
"varying vec4 gl_BackColor;\n"
"varying vec4 gl_FrontSecondaryColor;\n"
"varying vec4 gl_BackSecondaryColor;\n"
"varying vec4 gl_TexCoord[];\n"
"varying float gl_FogFragCoord;\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"vec4 ftransform () {\n"
"    return gl_ModelViewProjectionMatrix * gl_Vertex;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"vec4 texture1DLod (sampler1D sampler, float coord, float lod) {\n"
"    return vec4 (0.0);\n"
"}\n"
"vec4 texture1DProjLod (sampler1D sampler, vec2 coord, float lod) {\n"
"    return texture1DLod (sampler, coord.s / coord.t, lod);\n"
"}\n"
"vec4 texture1DProjLod (sampler1D sampler, vec4 coord, float lod) {\n"
"    return texture1DLod (sampler, coord.s / coord.q, lod);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"vec4 texture2DLod (sampler2D sampler, vec2 coord, float lod) {\n"
"    return vec4 (0.0);\n"
"}\n"
"vec4 texture2DProjLod (sampler2D sampler, vec3 coord, float lod) {\n"
"    return texture2DLod (sampler, vec2 (coord.s / coord.p, coord.t / coord.p), lod);\n"
"}\n"
"vec4 texture2DProjLod (sampler2D sampler, vec4 coord, float lod) {\n"
"    return texture2DLod (sampler, vec2 (coord.s / coord.q, coord.t / coord.q), lod);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"vec4 texture3DLod (sampler3D sampler, vec3 coord, float lod) {\n"
"    return vec4 (0.0);\n"
"}\n"
"vec4 texture3DProjLod (sampler3D sampler, vec4 coord, float lod) {\n"
"    return texture3DLod (sampler, vec3 (coord.s / coord.q, coord.t / coord.q, coord.s / coord.q),\n"
"        lod);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"vec4 textureCubeLod (samplerCube sampler, vec3 coord, float lod) {\n"
"    return vec4 (0.0);\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"vec4 shadow1DLod (sampler1DShadow sampler, vec3 coord, float lod) {\n"
"    return vec4 (0.0);\n"
"}\n"
"\n"
"vec4 shadow2DLod (sampler2DShadow sampler, vec3 coord, float lod) {\n"
"    return vec4 (0.0);\n"
"}\n"
"vec4 shadow1DProjLod (sampler1DShadow sampler, vec4 coord, float lod) {\n"
"    return shadow1DLod (sampler, vec3 (coord.s / coord.q, 0.0, coord.p / coord.q), lod);\n"
"}\n"
"vec4 shadow2DProjLod (sampler2DShadow sampler, vec4 coord, float lod) {\n"
"    return shadow2DLod (sampler, vec3 (coord.s / coord.q, coord.t / coord.q, coord.p / coord.q),\n"
"        lod);\n"
"}\n"
"\n"