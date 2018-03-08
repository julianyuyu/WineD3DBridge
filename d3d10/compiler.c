
#include <d3dcompiler.h>


HRESULT WINAPI D3D10CreateBlob(_In_ SIZE_T NumBytes,
	_Out_ ID3D10Blob ** ppBuffer)
{
	return D3DCreateBlob(NumBytes, ppBuffer);
}

HRESULT WINAPI D3D10GetInputAndOutputSignatureBlob(
	_In_  const void       *pShaderBytecode,
	_In_        SIZE_T     BytecodeLength,
	_Out_       ID3D10Blob **ppSignatureBlob)
{
	return D3DGetInputAndOutputSignatureBlob(pShaderBytecode, BytecodeLength, ppSignatureBlob);
}

HRESULT WINAPI D3D10GetInputSignatureBlob(
	_In_  const void       *pShaderBytecode,
	_In_        SIZE_T     BytecodeLength,
	_Out_       ID3D10Blob **ppSignatureBlob
)
{
	return D3DGetInputSignatureBlob(pShaderBytecode, BytecodeLength, ppSignatureBlob);
}
HRESULT WINAPI D3D10GetOutputSignatureBlob(
	_In_  const void       *pShaderBytecode,
	_In_        SIZE_T     BytecodeLength,
	_Out_       ID3D10Blob **ppSignatureBlob
)
{
	return D3DGetOutputSignatureBlob(pShaderBytecode, BytecodeLength, ppSignatureBlob);
}

HRESULT WINAPI D3D10GetShaderDebugInfo(
	const void       *pShaderBytecode,
	SIZE_T     BytecodeLength,
	ID3D10Blob **ppDebugInfo
)
{
	return D3DGetDebugInfo(pShaderBytecode, BytecodeLength, ppDebugInfo);
}
