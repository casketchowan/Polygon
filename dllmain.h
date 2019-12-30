// dllmain.h : Declaration of module class.

class CPolygonModule : public ATL::CAtlDllModuleT< CPolygonModule >
{
public :
	DECLARE_LIBID(LIBID_PolygonLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_POLYGON, "{f8250c36-3cad-4a7e-9db0-04279526ef16}")
};

extern class CPolygonModule _AtlModule;
