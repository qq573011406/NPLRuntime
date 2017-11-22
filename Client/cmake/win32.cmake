
# Options

option(NPLRUNTIME_LUAJIT21 "build luajit21 support GC64" ON)
option(NPLRUNTIME_LUAJIT20   "build luajit2.0.4" ON)
option(NPLRUNTIME_LUA51   "build lua5.1.5 with coco" ON)
option(NPLRUNTIME_SUPPORT_FBX "support FBX files (assimp)" ON)
option(NPLRUNTIME_PHYSICS "include physics" ON)

set(NPLRUNTIME_RENDERER "DIRECTX" CACHE STRING "Render API")
set_property(CACHE NPLRUNTIME_RENDERER PROPERTY STRINGS DIRECTX OPENGL)




option(BUILD_CURL_EXE OFF)
option(BUILD_CURL_TESTS OFF)
add_subdirectory (${SERVER_SOURCE_DIR}zlib-1.2.11 ${CLIENT_BINARY_DIR}/zlib-1.2.11)
set(ZLIB_FOUND 1)
set(ZLIB_LIBRARY zlib)
set(ZLIB_LIBRARIES zlib)
set(ZLIB_INCLUDE_DIR ${SERVER_SOURCE_DIR}zlib-1.2.11 ${CLIENT_BINARY_DIR}/zlib-1.2.11)
set(ZLIB_SOURCE_DIR ${ZLIB_INCLUDE_DIR})

add_subdirectory (${SERVER_SOURCE_DIR}curl-7.47.1 ${CLIENT_BINARY_DIR}/curl-7.47.1)


if (NPLRUNTIME_LUAJIT21) 
	add_subdirectory (${SERVER_SOURCE_DIR}LuaJIT-2.1 ${CLIENT_BINARY_DIR}/LuaJIT-2.1)
endif()
if (NPLRUNTIME_LUA51)
	add_subdirectory (${SERVER_SOURCE_DIR}lua-5.1.4 ${CLIENT_BINARY_DIR}/lua-5.1.4)
endif()
if(NPLRUNTIME_LUAJIT20)
	add_subdirectory (${SERVER_SOURCE_DIR}LuaJIT ${CLIENT_BINARY_DIR}/LuaJIT)
endif()

add_subdirectory (${SERVER_SOURCE_DIR}luabind-0.9 ${CLIENT_BINARY_DIR}/luabind-0.9)
add_subdirectory (${SERVER_SOURCE_DIR}sqlite-3.6.23.1 ${CLIENT_BINARY_DIR}/sqlite-3.6.23.1)
add_subdirectory (${SERVER_SOURCE_DIR}jsoncpp-0.5.0 ${CLIENT_BINARY_DIR}/jsoncpp-0.5.0)
add_subdirectory (${SERVER_SOURCE_DIR}tinyxpath_1_3_1  ${CLIENT_BINARY_DIR}/tinyxpath_1_3_1)



if(NPLRUNTIME_STATIC_LIB) 
	# add_subdirectory (${CLIENT_SOURCE_DIR}/trunk/externals/png ${CLIENT_BINARY_DIR}/png)
else()
	add_subdirectory (${SERVER_SOURCE_DIR}luasql ${CLIENT_BINARY_DIR}/luasql)
endif()

if(NPLRUNTIME_SUPPORT_FBX) 
	add_subdirectory (${CLIENT_SOURCE_DIR}/trunk/externals/assimp-4.0.0 ${CLIENT_BINARY_DIR}/assimp-4.0.0)
endif()

# main NPL runtime using ParaEngineClient
add_subdirectory (${CLIENT_SOURCE_DIR}/../NPLRuntime/ParaEngineClient ${CLIENT_BINARY_DIR}/ParaEngineClient)

# expose the core include directory 
set (ParaEngineClient_SOURCE_DIR ${CLIENT_SOURCE_DIR}/trunk/ParaEngineClient)

if(NPLRUNTIME_PHYSICS)
	add_subdirectory (${CLIENT_SOURCE_DIR}/trunk/externals/bullet3 ${CLIENT_BINARY_DIR}/bullet3)
	add_subdirectory (${CLIENT_SOURCE_DIR}/trunk/PhysicsBT ${CLIENT_BINARY_DIR}/PhysicsBT)
endif()
	
if(PARAENGINE_CLIENT_DLL)
	if(NPLRUNTIME_STATIC_LIB) 
	else()
		# this app is for testing the client dll
		add_subdirectory (${CLIENT_SOURCE_DIR}/trunk/ParaEngineClientApp ${CLIENT_BINARY_DIR}/ParaEngineClientApp)
	endif()
endif()

	
# following are plugins that should be build after main runtime	
if(NPLRUNTIME_STATIC_LIB) 
else()	
	add_subdirectory (${SERVER_SOURCE_DIR}NPLMono/NPLMono2  ${CLIENT_BINARY_DIR}/NPLMono/NPLMono2)
endif()

# export these two variables to its parent scope just in case some app project reference NPLRuntime statically. 
set(NPLRUNTIME_LINK_LIBRARIES ${NPLRUNTIME_LINK_LIBRARIES} PARENT_SCOPE)
set(NPLRUNTIME_LINK_DIRECTORIES ${NPLRUNTIME_LINK_DIRECTORIES} PARENT_SCOPE)


