// Copyright 2021 The ShaderTrap Project Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Automatically-generated file - DO NOT EDIT

// clang-format off
// GLAD needs to be included here because it must be included before
// GLES3/gl32.h, which will be transitively included by get_gl_functions.h.
#include "glad/glad.h"
// clang-format on

#include "shadertrap/get_gl_functions.h"

#include <functional>

#include "libshadertrap/gl_functions.h"

namespace shadertrap {

GlFunctions GetGlFunctions() {
  GlFunctions result{};
  // clang-format off
  result.glActiveShaderProgram_ = glActiveShaderProgram;
  result.glActiveTexture_ = glActiveTexture;
  result.glAttachShader_ = glAttachShader;
  result.glBeginQuery_ = glBeginQuery;
  result.glBeginTransformFeedback_ = glBeginTransformFeedback;
  result.glBindAttribLocation_ = glBindAttribLocation;
  result.glBindBuffer_ = glBindBuffer;
  result.glBindBufferBase_ = glBindBufferBase;
  result.glBindBufferRange_ = glBindBufferRange;
  result.glBindFramebuffer_ = glBindFramebuffer;
  result.glBindImageTexture_ = glBindImageTexture;
  result.glBindProgramPipeline_ = glBindProgramPipeline;
  result.glBindRenderbuffer_ = glBindRenderbuffer;
  result.glBindSampler_ = glBindSampler;
  result.glBindTexture_ = glBindTexture;
  result.glBindTransformFeedback_ = glBindTransformFeedback;
  result.glBindVertexArray_ = glBindVertexArray;
  result.glBindVertexBuffer_ = glBindVertexBuffer;
  result.glBlendBarrier_ = glBlendBarrier;
  result.glBlendColor_ = glBlendColor;
  result.glBlendEquation_ = glBlendEquation;
  result.glBlendEquationSeparate_ = glBlendEquationSeparate;
  result.glBlendEquationSeparatei_ = glBlendEquationSeparatei;
  result.glBlendEquationi_ = glBlendEquationi;
  result.glBlendFunc_ = glBlendFunc;
  result.glBlendFuncSeparate_ = glBlendFuncSeparate;
  result.glBlendFuncSeparatei_ = glBlendFuncSeparatei;
  result.glBlendFunci_ = glBlendFunci;
  result.glBlitFramebuffer_ = glBlitFramebuffer;
  result.glBufferData_ = glBufferData;
  result.glBufferSubData_ = glBufferSubData;
  result.glCheckFramebufferStatus_ = glCheckFramebufferStatus;
  result.glClear_ = glClear;
  result.glClearBufferfi_ = glClearBufferfi;
  result.glClearBufferfv_ = glClearBufferfv;
  result.glClearBufferiv_ = glClearBufferiv;
  result.glClearBufferuiv_ = glClearBufferuiv;
  result.glClearColor_ = glClearColor;
  result.glClearDepthf_ = glClearDepthf;
  result.glClearStencil_ = glClearStencil;
  result.glClientWaitSync_ = glClientWaitSync;
  result.glColorMask_ = glColorMask;
  result.glColorMaski_ = glColorMaski;
  result.glCompileShader_ = glCompileShader;
  result.glCompressedTexImage2D_ = glCompressedTexImage2D;
  result.glCompressedTexImage3D_ = glCompressedTexImage3D;
  result.glCompressedTexSubImage2D_ = glCompressedTexSubImage2D;
  result.glCompressedTexSubImage3D_ = glCompressedTexSubImage3D;
  result.glCopyBufferSubData_ = glCopyBufferSubData;
  result.glCopyImageSubData_ = glCopyImageSubData;
  result.glCopyTexImage2D_ = glCopyTexImage2D;
  result.glCopyTexSubImage2D_ = glCopyTexSubImage2D;
  result.glCopyTexSubImage3D_ = glCopyTexSubImage3D;
  result.glCreateProgram_ = glCreateProgram;
  result.glCreateShader_ = glCreateShader;
  result.glCreateShaderProgramv_ = glCreateShaderProgramv;
  result.glCullFace_ = glCullFace;
  result.glDebugMessageCallback_ = glDebugMessageCallback;
  result.glDebugMessageControl_ = glDebugMessageControl;
  result.glDebugMessageInsert_ = glDebugMessageInsert;
  result.glDeleteBuffers_ = glDeleteBuffers;
  result.glDeleteFramebuffers_ = glDeleteFramebuffers;
  result.glDeleteProgram_ = glDeleteProgram;
  result.glDeleteProgramPipelines_ = glDeleteProgramPipelines;
  result.glDeleteQueries_ = glDeleteQueries;
  result.glDeleteRenderbuffers_ = glDeleteRenderbuffers;
  result.glDeleteSamplers_ = glDeleteSamplers;
  result.glDeleteShader_ = glDeleteShader;
  result.glDeleteSync_ = glDeleteSync;
  result.glDeleteTextures_ = glDeleteTextures;
  result.glDeleteTransformFeedbacks_ = glDeleteTransformFeedbacks;
  result.glDeleteVertexArrays_ = glDeleteVertexArrays;
  result.glDepthFunc_ = glDepthFunc;
  result.glDepthMask_ = glDepthMask;
  result.glDepthRangef_ = glDepthRangef;
  result.glDetachShader_ = glDetachShader;
  result.glDisable_ = glDisable;
  result.glDisableVertexAttribArray_ = glDisableVertexAttribArray;
  result.glDisablei_ = glDisablei;
  result.glDispatchCompute_ = glDispatchCompute;
  result.glDispatchComputeIndirect_ = glDispatchComputeIndirect;
  result.glDrawArrays_ = glDrawArrays;
  result.glDrawArraysIndirect_ = glDrawArraysIndirect;
  result.glDrawArraysInstanced_ = glDrawArraysInstanced;
  result.glDrawBuffers_ = glDrawBuffers;
  result.glDrawElements_ = glDrawElements;
  result.glDrawElementsBaseVertex_ = glDrawElementsBaseVertex;
  result.glDrawElementsIndirect_ = glDrawElementsIndirect;
  result.glDrawElementsInstanced_ = glDrawElementsInstanced;
  result.glDrawElementsInstancedBaseVertex_ = glDrawElementsInstancedBaseVertex;
  result.glDrawRangeElements_ = glDrawRangeElements;
  result.glDrawRangeElementsBaseVertex_ = glDrawRangeElementsBaseVertex;
  result.glEnable_ = glEnable;
  result.glEnableVertexAttribArray_ = glEnableVertexAttribArray;
  result.glEnablei_ = glEnablei;
  result.glEndQuery_ = glEndQuery;
  result.glEndTransformFeedback_ = glEndTransformFeedback;
  result.glFenceSync_ = glFenceSync;
  result.glFinish_ = glFinish;
  result.glFlush_ = glFlush;
  result.glFlushMappedBufferRange_ = glFlushMappedBufferRange;
  result.glFramebufferParameteri_ = glFramebufferParameteri;
  result.glFramebufferRenderbuffer_ = glFramebufferRenderbuffer;
  result.glFramebufferTexture_ = glFramebufferTexture;
  result.glFramebufferTexture2D_ = glFramebufferTexture2D;
  result.glFramebufferTextureLayer_ = glFramebufferTextureLayer;
  result.glFrontFace_ = glFrontFace;
  result.glGenBuffers_ = glGenBuffers;
  result.glGenFramebuffers_ = glGenFramebuffers;
  result.glGenProgramPipelines_ = glGenProgramPipelines;
  result.glGenQueries_ = glGenQueries;
  result.glGenRenderbuffers_ = glGenRenderbuffers;
  result.glGenSamplers_ = glGenSamplers;
  result.glGenTextures_ = glGenTextures;
  result.glGenTransformFeedbacks_ = glGenTransformFeedbacks;
  result.glGenVertexArrays_ = glGenVertexArrays;
  result.glGenerateMipmap_ = glGenerateMipmap;
  result.glGetActiveAttrib_ = glGetActiveAttrib;
  result.glGetActiveUniform_ = glGetActiveUniform;
  result.glGetActiveUniformBlockName_ = glGetActiveUniformBlockName;
  result.glGetActiveUniformBlockiv_ = glGetActiveUniformBlockiv;
  result.glGetActiveUniformsiv_ = glGetActiveUniformsiv;
  result.glGetAttachedShaders_ = glGetAttachedShaders;
  result.glGetAttribLocation_ = glGetAttribLocation;
  result.glGetBooleani_v_ = glGetBooleani_v;
  result.glGetBooleanv_ = glGetBooleanv;
  result.glGetBufferParameteri64v_ = glGetBufferParameteri64v;
  result.glGetBufferParameteriv_ = glGetBufferParameteriv;
  result.glGetBufferPointerv_ = glGetBufferPointerv;
  result.glGetDebugMessageLog_ = glGetDebugMessageLog;
  result.glGetError_ = glGetError;
  result.glGetFloatv_ = glGetFloatv;
  result.glGetFragDataLocation_ = glGetFragDataLocation;
  result.glGetFramebufferAttachmentParameteriv_ = glGetFramebufferAttachmentParameteriv;
  result.glGetFramebufferParameteriv_ = glGetFramebufferParameteriv;
  result.glGetGraphicsResetStatus_ = glGetGraphicsResetStatus;
  result.glGetInteger64i_v_ = glGetInteger64i_v;
  result.glGetInteger64v_ = glGetInteger64v;
  result.glGetIntegeri_v_ = glGetIntegeri_v;
  result.glGetIntegerv_ = glGetIntegerv;
  result.glGetInternalformativ_ = glGetInternalformativ;
  result.glGetMultisamplefv_ = glGetMultisamplefv;
  result.glGetObjectLabel_ = glGetObjectLabel;
  result.glGetObjectPtrLabel_ = glGetObjectPtrLabel;
  result.glGetPointerv_ = glGetPointerv;
  result.glGetProgramBinary_ = glGetProgramBinary;
  result.glGetProgramInfoLog_ = glGetProgramInfoLog;
  result.glGetProgramInterfaceiv_ = glGetProgramInterfaceiv;
  result.glGetProgramPipelineInfoLog_ = glGetProgramPipelineInfoLog;
  result.glGetProgramPipelineiv_ = glGetProgramPipelineiv;
  result.glGetProgramResourceIndex_ = glGetProgramResourceIndex;
  result.glGetProgramResourceLocation_ = glGetProgramResourceLocation;
  result.glGetProgramResourceName_ = glGetProgramResourceName;
  result.glGetProgramResourceiv_ = glGetProgramResourceiv;
  result.glGetProgramiv_ = glGetProgramiv;
  result.glGetQueryObjectuiv_ = glGetQueryObjectuiv;
  result.glGetQueryiv_ = glGetQueryiv;
  result.glGetRenderbufferParameteriv_ = glGetRenderbufferParameteriv;
  result.glGetSamplerParameterIiv_ = glGetSamplerParameterIiv;
  result.glGetSamplerParameterIuiv_ = glGetSamplerParameterIuiv;
  result.glGetSamplerParameterfv_ = glGetSamplerParameterfv;
  result.glGetSamplerParameteriv_ = glGetSamplerParameteriv;
  result.glGetShaderInfoLog_ = glGetShaderInfoLog;
  result.glGetShaderPrecisionFormat_ = glGetShaderPrecisionFormat;
  result.glGetShaderSource_ = glGetShaderSource;
  result.glGetShaderiv_ = glGetShaderiv;
  result.glGetString_ = glGetString;
  result.glGetStringi_ = glGetStringi;
  result.glGetSynciv_ = glGetSynciv;
  result.glGetTexLevelParameterfv_ = glGetTexLevelParameterfv;
  result.glGetTexLevelParameteriv_ = glGetTexLevelParameteriv;
  result.glGetTexParameterIiv_ = glGetTexParameterIiv;
  result.glGetTexParameterIuiv_ = glGetTexParameterIuiv;
  result.glGetTexParameterfv_ = glGetTexParameterfv;
  result.glGetTexParameteriv_ = glGetTexParameteriv;
  result.glGetTransformFeedbackVarying_ = glGetTransformFeedbackVarying;
  result.glGetUniformBlockIndex_ = glGetUniformBlockIndex;
  result.glGetUniformIndices_ = glGetUniformIndices;
  result.glGetUniformLocation_ = glGetUniformLocation;
  result.glGetUniformfv_ = glGetUniformfv;
  result.glGetUniformiv_ = glGetUniformiv;
  result.glGetUniformuiv_ = glGetUniformuiv;
  result.glGetVertexAttribIiv_ = glGetVertexAttribIiv;
  result.glGetVertexAttribIuiv_ = glGetVertexAttribIuiv;
  result.glGetVertexAttribPointerv_ = glGetVertexAttribPointerv;
  result.glGetVertexAttribfv_ = glGetVertexAttribfv;
  result.glGetVertexAttribiv_ = glGetVertexAttribiv;
  result.glGetnUniformfv_ = glGetnUniformfv;
  result.glGetnUniformiv_ = glGetnUniformiv;
  result.glGetnUniformuiv_ = glGetnUniformuiv;
  result.glHint_ = glHint;
  result.glInvalidateFramebuffer_ = glInvalidateFramebuffer;
  result.glInvalidateSubFramebuffer_ = glInvalidateSubFramebuffer;
  result.glIsBuffer_ = glIsBuffer;
  result.glIsEnabled_ = glIsEnabled;
  result.glIsEnabledi_ = glIsEnabledi;
  result.glIsFramebuffer_ = glIsFramebuffer;
  result.glIsProgram_ = glIsProgram;
  result.glIsProgramPipeline_ = glIsProgramPipeline;
  result.glIsQuery_ = glIsQuery;
  result.glIsRenderbuffer_ = glIsRenderbuffer;
  result.glIsSampler_ = glIsSampler;
  result.glIsShader_ = glIsShader;
  result.glIsSync_ = glIsSync;
  result.glIsTexture_ = glIsTexture;
  result.glIsTransformFeedback_ = glIsTransformFeedback;
  result.glIsVertexArray_ = glIsVertexArray;
  result.glLineWidth_ = glLineWidth;
  result.glLinkProgram_ = glLinkProgram;
  result.glMapBufferRange_ = glMapBufferRange;
  result.glMemoryBarrier_ = glMemoryBarrier;
  result.glMemoryBarrierByRegion_ = glMemoryBarrierByRegion;
  result.glMinSampleShading_ = glMinSampleShading;
  result.glObjectLabel_ = glObjectLabel;
  result.glObjectPtrLabel_ = glObjectPtrLabel;
  result.glPatchParameteri_ = glPatchParameteri;
  result.glPauseTransformFeedback_ = glPauseTransformFeedback;
  result.glPixelStorei_ = glPixelStorei;
  result.glPolygonOffset_ = glPolygonOffset;
  result.glPopDebugGroup_ = glPopDebugGroup;
  result.glPrimitiveBoundingBox_ = glPrimitiveBoundingBox;
  result.glProgramBinary_ = glProgramBinary;
  result.glProgramParameteri_ = glProgramParameteri;
  result.glProgramUniform1f_ = glProgramUniform1f;
  result.glProgramUniform1fv_ = glProgramUniform1fv;
  result.glProgramUniform1i_ = glProgramUniform1i;
  result.glProgramUniform1iv_ = glProgramUniform1iv;
  result.glProgramUniform1ui_ = glProgramUniform1ui;
  result.glProgramUniform1uiv_ = glProgramUniform1uiv;
  result.glProgramUniform2f_ = glProgramUniform2f;
  result.glProgramUniform2fv_ = glProgramUniform2fv;
  result.glProgramUniform2i_ = glProgramUniform2i;
  result.glProgramUniform2iv_ = glProgramUniform2iv;
  result.glProgramUniform2ui_ = glProgramUniform2ui;
  result.glProgramUniform2uiv_ = glProgramUniform2uiv;
  result.glProgramUniform3f_ = glProgramUniform3f;
  result.glProgramUniform3fv_ = glProgramUniform3fv;
  result.glProgramUniform3i_ = glProgramUniform3i;
  result.glProgramUniform3iv_ = glProgramUniform3iv;
  result.glProgramUniform3ui_ = glProgramUniform3ui;
  result.glProgramUniform3uiv_ = glProgramUniform3uiv;
  result.glProgramUniform4f_ = glProgramUniform4f;
  result.glProgramUniform4fv_ = glProgramUniform4fv;
  result.glProgramUniform4i_ = glProgramUniform4i;
  result.glProgramUniform4iv_ = glProgramUniform4iv;
  result.glProgramUniform4ui_ = glProgramUniform4ui;
  result.glProgramUniform4uiv_ = glProgramUniform4uiv;
  result.glProgramUniformMatrix2fv_ = glProgramUniformMatrix2fv;
  result.glProgramUniformMatrix2x3fv_ = glProgramUniformMatrix2x3fv;
  result.glProgramUniformMatrix2x4fv_ = glProgramUniformMatrix2x4fv;
  result.glProgramUniformMatrix3fv_ = glProgramUniformMatrix3fv;
  result.glProgramUniformMatrix3x2fv_ = glProgramUniformMatrix3x2fv;
  result.glProgramUniformMatrix3x4fv_ = glProgramUniformMatrix3x4fv;
  result.glProgramUniformMatrix4fv_ = glProgramUniformMatrix4fv;
  result.glProgramUniformMatrix4x2fv_ = glProgramUniformMatrix4x2fv;
  result.glProgramUniformMatrix4x3fv_ = glProgramUniformMatrix4x3fv;
  result.glPushDebugGroup_ = glPushDebugGroup;
  result.glReadBuffer_ = glReadBuffer;
  result.glReadPixels_ = glReadPixels;
  result.glReadnPixels_ = glReadnPixels;
  result.glReleaseShaderCompiler_ = glReleaseShaderCompiler;
  result.glRenderbufferStorage_ = glRenderbufferStorage;
  result.glRenderbufferStorageMultisample_ = glRenderbufferStorageMultisample;
  result.glResumeTransformFeedback_ = glResumeTransformFeedback;
  result.glSampleCoverage_ = glSampleCoverage;
  result.glSampleMaski_ = glSampleMaski;
  result.glSamplerParameterIiv_ = glSamplerParameterIiv;
  result.glSamplerParameterIuiv_ = glSamplerParameterIuiv;
  result.glSamplerParameterf_ = glSamplerParameterf;
  result.glSamplerParameterfv_ = glSamplerParameterfv;
  result.glSamplerParameteri_ = glSamplerParameteri;
  result.glSamplerParameteriv_ = glSamplerParameteriv;
  result.glScissor_ = glScissor;
  result.glShaderBinary_ = glShaderBinary;
  result.glShaderSource_ = glShaderSource;
  result.glStencilFunc_ = glStencilFunc;
  result.glStencilFuncSeparate_ = glStencilFuncSeparate;
  result.glStencilMask_ = glStencilMask;
  result.glStencilMaskSeparate_ = glStencilMaskSeparate;
  result.glStencilOp_ = glStencilOp;
  result.glStencilOpSeparate_ = glStencilOpSeparate;
  result.glTexBuffer_ = glTexBuffer;
  result.glTexBufferRange_ = glTexBufferRange;
  result.glTexImage2D_ = glTexImage2D;
  result.glTexImage3D_ = glTexImage3D;
  result.glTexParameterIiv_ = glTexParameterIiv;
  result.glTexParameterIuiv_ = glTexParameterIuiv;
  result.glTexParameterf_ = glTexParameterf;
  result.glTexParameterfv_ = glTexParameterfv;
  result.glTexParameteri_ = glTexParameteri;
  result.glTexParameteriv_ = glTexParameteriv;
  result.glTexStorage2D_ = glTexStorage2D;
  result.glTexStorage2DMultisample_ = glTexStorage2DMultisample;
  result.glTexStorage3D_ = glTexStorage3D;
  result.glTexStorage3DMultisample_ = glTexStorage3DMultisample;
  result.glTexSubImage2D_ = glTexSubImage2D;
  result.glTexSubImage3D_ = glTexSubImage3D;
  result.glTransformFeedbackVaryings_ = glTransformFeedbackVaryings;
  result.glUniform1f_ = glUniform1f;
  result.glUniform1fv_ = glUniform1fv;
  result.glUniform1i_ = glUniform1i;
  result.glUniform1iv_ = glUniform1iv;
  result.glUniform1ui_ = glUniform1ui;
  result.glUniform1uiv_ = glUniform1uiv;
  result.glUniform2f_ = glUniform2f;
  result.glUniform2fv_ = glUniform2fv;
  result.glUniform2i_ = glUniform2i;
  result.glUniform2iv_ = glUniform2iv;
  result.glUniform2ui_ = glUniform2ui;
  result.glUniform2uiv_ = glUniform2uiv;
  result.glUniform3f_ = glUniform3f;
  result.glUniform3fv_ = glUniform3fv;
  result.glUniform3i_ = glUniform3i;
  result.glUniform3iv_ = glUniform3iv;
  result.glUniform3ui_ = glUniform3ui;
  result.glUniform3uiv_ = glUniform3uiv;
  result.glUniform4f_ = glUniform4f;
  result.glUniform4fv_ = glUniform4fv;
  result.glUniform4i_ = glUniform4i;
  result.glUniform4iv_ = glUniform4iv;
  result.glUniform4ui_ = glUniform4ui;
  result.glUniform4uiv_ = glUniform4uiv;
  result.glUniformBlockBinding_ = glUniformBlockBinding;
  result.glUniformMatrix2fv_ = glUniformMatrix2fv;
  result.glUniformMatrix2x3fv_ = glUniformMatrix2x3fv;
  result.glUniformMatrix2x4fv_ = glUniformMatrix2x4fv;
  result.glUniformMatrix3fv_ = glUniformMatrix3fv;
  result.glUniformMatrix3x2fv_ = glUniformMatrix3x2fv;
  result.glUniformMatrix3x4fv_ = glUniformMatrix3x4fv;
  result.glUniformMatrix4fv_ = glUniformMatrix4fv;
  result.glUniformMatrix4x2fv_ = glUniformMatrix4x2fv;
  result.glUniformMatrix4x3fv_ = glUniformMatrix4x3fv;
  result.glUnmapBuffer_ = glUnmapBuffer;
  result.glUseProgram_ = glUseProgram;
  result.glUseProgramStages_ = glUseProgramStages;
  result.glValidateProgram_ = glValidateProgram;
  result.glValidateProgramPipeline_ = glValidateProgramPipeline;
  result.glVertexAttrib1f_ = glVertexAttrib1f;
  result.glVertexAttrib1fv_ = glVertexAttrib1fv;
  result.glVertexAttrib2f_ = glVertexAttrib2f;
  result.glVertexAttrib2fv_ = glVertexAttrib2fv;
  result.glVertexAttrib3f_ = glVertexAttrib3f;
  result.glVertexAttrib3fv_ = glVertexAttrib3fv;
  result.glVertexAttrib4f_ = glVertexAttrib4f;
  result.glVertexAttrib4fv_ = glVertexAttrib4fv;
  result.glVertexAttribBinding_ = glVertexAttribBinding;
  result.glVertexAttribDivisor_ = glVertexAttribDivisor;
  result.glVertexAttribFormat_ = glVertexAttribFormat;
  result.glVertexAttribI4i_ = glVertexAttribI4i;
  result.glVertexAttribI4iv_ = glVertexAttribI4iv;
  result.glVertexAttribI4ui_ = glVertexAttribI4ui;
  result.glVertexAttribI4uiv_ = glVertexAttribI4uiv;
  result.glVertexAttribIFormat_ = glVertexAttribIFormat;
  result.glVertexAttribIPointer_ = glVertexAttribIPointer;
  result.glVertexAttribPointer_ = glVertexAttribPointer;
  result.glVertexBindingDivisor_ = glVertexBindingDivisor;
  result.glViewport_ = glViewport;
  result.glWaitSync_ = glWaitSync;
  // clang-format on
  return result;
}

}  // namespace shadertrap