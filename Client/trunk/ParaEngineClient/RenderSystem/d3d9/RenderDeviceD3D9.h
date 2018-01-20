#pragma once
#include "Framework/Interface/Render/IRenderDevice.h"
#include "d3d9.h"


namespace ParaEngine
{
	class RenderDeviceD3D9 : public IRenderDevice
	{
	public:
		RenderDeviceD3D9(IDirect3DDevice9* device);
		virtual ~RenderDeviceD3D9() = default;
	
		LPDIRECT3DDEVICE9 GetDirect3DDevice9() const;
	


		virtual uint32_t GetRenderState(const ERenderState& State) override;


		virtual bool SetRenderState(const ERenderState State, const uint32_t Value) override;


		virtual bool SetClipPlane(uint32_t Index, const float* pPlane) override;


		//virtual HRESULT SetTexture(DWORD Stage, IDirect3DTexture9* pTexture) override;


		//virtual HRESULT SetSamplerState(DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD Value) override;


		//virtual HRESULT GetSamplerState(DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD* pValue) override;


		//virtual HRESULT SetIndices(IDirect3DIndexBuffer9* pIndexData) override;


		//virtual HRESULT SetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer9* pStreamData, UINT OffsetInBytes, UINT Stride) override;


		//virtual HRESULT SetTransform(D3DTRANSFORMSTATETYPE State, DeviceMatrix_ptr pMatrix) override;


		//virtual HRESULT SetFVF(DWORD FVF) override;


		//virtual void SetCursorPosition(int X, int Y, DWORD Flags) override;


		//virtual HRESULT SetVertexDeclaration(IDirect3DVertexDeclaration9* pDecl) override;


		//virtual HRESULT CreateVertexDeclaration(CONST D3DVERTEXELEMENT9* pVertexElements, IDirect3DVertexDeclaration9** ppDecl) override;


		//virtual HRESULT BeginScene() override;


		//virtual HRESULT EndScene() override;


		//virtual HRESULT Clear(DWORD Count, const D3DRECT* pRects, DWORD Flags, DWORD Color, float Z, DWORD Stencil) override;


		//virtual HRESULT SetViewport(const D3DVIEWPORT9* pViewport) override;


		//virtual HRESULT GetViewport(D3DVIEWPORT9* pViewport) override;


		//virtual HRESULT SetScissorRect(RECT* pRect) override;


		//virtual HRESULT GetScissorRect(RECT* pRect) override;


		//virtual HRESULT SetVertexShader(IDirect3DVertexShader9* pShader) override;


		//virtual HRESULT SetPixelShader(IDirect3DPixelShader9* pShader) override;


		//virtual HRESULT CreateIndexBuffer(UINT Length, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DIndexBuffer9** ppIndexBuffer, HANDLE* pSharedHandle) override;


		//virtual HRESULT CreateVertexBuffer(UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, IDirect3DVertexBuffer9** ppVertexBuffer, HANDLE* pSharedHandle) override;


		//virtual HRESULT DrawPrimitive(int nStatisticsType, D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT PrimitiveCount) override;


		//virtual HRESULT DrawPrimitiveUP(int nStatisticsType, D3DPRIMITIVETYPE PrimitiveType, UINT PrimitiveCount, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride) override;


		//virtual HRESULT DrawIndexedPrimitive(int nStatisticsType, D3DPRIMITIVETYPE PrimitiveType, INT BaseVertexIndex, UINT MinIndex, UINT NumVertices, UINT indexStart, UINT PrimitiveCount) override;


		//virtual HRESULT DrawIndexedPrimitive(D3DPRIMITIVETYPE PrimitiveType, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount) override;


		//virtual HRESULT DrawIndexedPrimitiveUP(int nStatisticsType, D3DPRIMITIVETYPE PrimitiveType, UINT MinVertexIndex, UINT NumVertices, UINT PrimitiveCount, CONST void * pIndexData, D3DFORMAT IndexDataFormat, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride) override;


		//virtual int GetMaxSimultaneousTextures() override;


		//virtual HRESULT SetMaterial(D3DMATERIAL9* pMaterial) override;


		//virtual HRESULT SetRenderTarget(DWORD RenderTargetIndex, IDirect3DSurface9* pRenderTarget) override;


		//virtual bool ReadPixels(int nLeft, int nTop, int nWidth, int nHeight, void* pDataOut, DWORD nDataFormat = 0, DWORD nDataType = 0) override;


		//virtual HRESULT CreateStateBlock(D3DSTATEBLOCKTYPE Type, IDirect3DStateBlock9** ppSB) override;


		//virtual HRESULT SetDepthStencilSurface(IDirect3DSurface9* pNewZStencil) override;


		//virtual HRESULT CreateOffscreenPlainSurface(UINT Width, UINT Height, D3DFORMAT Format, D3DPOOL Pool, IDirect3DSurface9** ppSurface, HANDLE* pSharedHandle) override;


		//virtual HRESULT GetDepthStencilSurface(IDirect3DSurface9** ppZStencilSurface) override;


		//virtual HRESULT CreateTexture(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DTexture9** ppTexture, HANDLE* pSharedHandle) override;


		//virtual HRESULT CreateDepthStencilSurface(UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality, BOOL Discard, IDirect3DSurface9** ppSurface, HANDLE* pSharedHandle) override;


		//virtual HRESULT StretchRect(IDirect3DSurface9* pSourceSurface, CONST RECT* pSourceRect, IDirect3DSurface9* pDestSurface, CONST RECT* pDestRect, D3DTEXTUREFILTERTYPE Filter) override;


		//virtual HRESULT GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* pMatrix) override;




		//virtual HRESULT SetStreamSourceFreq(UINT StreamNumber, UINT Setting) override;


		//virtual HRESULT SetLight(DWORD Index, CONST D3DLIGHT9* pLight) override;


		//virtual HRESULT GetRenderTargetData(IDirect3DSurface9* pRenderTarget, IDirect3DSurface9* pDestSurface) override;


		//virtual HRESULT SetVertexShaderConstantF(UINT StartRegister, CONST float* pConstantData, UINT Vector4fCount) override;


		//virtual HRESULT ShowCursor(BOOL bShow) override;


		//virtual HRESULT Present(RECT* pSourceRect, CONST RECT* pDestRect, HWND hDestWindowOverride, CONST RGNDATA* pDirtyRegion) override;


		//virtual HRESULT TestCooperativeLevel() override;



		//virtual HRESULT CreateTexture(UINT Width, UINT Height, UINT MipLeves, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, LPDIRECT3DTEXTURE9* ppTexture) override;


		//virtual HRESULT CreateTextureFromFileInMemoryEx(LPCVOID pSrcData, UINT SrcDataSize, UINT Width, UINT Height, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO* pSrcInfo, PALETTEENTRY*pPalette, LPDIRECT3DTEXTURE9*ppTexture) override;


		//virtual HRESULT CreateTextureFromFileEx(LPCSTR pSrcFile, UINT Width, UINT Height, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO* pSrcInfo, PALETTEENTRY* pPalette, LPDIRECT3DTEXTURE9* ppTexture) override;


		//virtual HRESULT CheckTextureRequirements(UINT* pWidth, UINT* pHeight, UINT* pNumMipLevels, DWORD Usage, D3DFORMAT* pFormat, D3DPOOL Pool) override;


		//virtual HRESULT CreateCubeTextureFromFileInMemoryEx(LPCVOID pSrcData, UINT SrcDataSize, UINT Size, UINT MipLevels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, DWORD Filter, DWORD MipFilter, D3DCOLOR ColorKey, D3DXIMAGE_INFO* pSrcInfo, PALETTEENTRY* pPalette, LPDIRECT3DCUBETEXTURE9* ppCubeTexture) override;


		//virtual HRESULT LightEnable(DWORD Index, BOOL Enable) override;


		//virtual HRESULT CreateEffect(LPCVOID pSrcData, UINT SrcDataLen, CONST D3DXMACRO* pDefines, LPD3DXINCLUDE pInclude, DWORD Flags, LPD3DXEFFECTPOOL pPool, LPD3DXEFFECT* ppEffect, LPD3DXBUFFER* ppCompilationErrors) override;


		//virtual HRESULT CreateFont(INT Height, UINT Width, UINT Weight, UINT MipLevels, BOOL Italic, DWORD CharSet, DWORD OutputPrecision, DWORD Quality, DWORD PitchAndFamily, LPCSTR pFaceName, LPD3DXFONT* ppFont) override;


		//virtual HRESULT SetCursorProperties(UINT XHotSpot, UINT YHotSpot, IDirect3DSurface9* pCursorBitmap) override;


		//virtual HRESULT CreateQuery(D3DQUERYTYPE Type, IDirect3DQuery9** ppQuery) override;


		//virtual HRESULT CreateMeshFVF(DWORD NumFaces, DWORD NumVertices, DWORD Options, DWORD FVF, LPD3DXMESH* ppMesh) override;


		//virtual HRESULT CreateSprite(LPD3DXSPRITE* ppSprite) override;


		//virtual HRESULT LoadMeshFromXInMemory(LPCVOID Memory, DWORD SizeOfMemory, DWORD Options, LPD3DXBUFFER *ppAdjacency, LPD3DXBUFFER *ppMaterials, LPD3DXBUFFER *ppEffectInstances, DWORD *pNumMaterials, LPD3DXMESH *ppMesh) override;



virtual bool ReadPixels(int nLeft, int nTop, int nWidth, int nHeight, void* pDataOut, uint32_t nDataFormat = 0, uint32_t nDataType = 0) override;


virtual int GetMaxSimultaneousTextures() override;

//virtual HRESULT LoadMeshFromXof(LPD3DXFILEDATA pxofMesh, DWORD Options, LPD3DXBUFFER *ppAdjacency, LPD3DXBUFFER *ppMaterials, LPD3DXBUFFER *ppEffectInstances, DWORD *pNumMaterials, LPD3DXMESH *ppMesh) override;

	private:
		LPDIRECT3DDEVICE9 m_pD3DDevice;
	};

	inline LPDIRECT3DDEVICE9 GETD3D(IRenderDevice* pRenderDevice)
	{
		return ((RenderDeviceD3D9*)pRenderDevice)->GetDirect3DDevice9();
	}
}
