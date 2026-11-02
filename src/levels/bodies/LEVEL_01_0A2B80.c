extern char D_002B1C08[];
extern char D_0029F008[];
extern int D_001F68A0[];
extern int D_001F64A0[];
extern char D_001F64B0[];
extern int D_001F6894[];
extern int D_001F6898[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0A3CB8(char *, int, int, int, int, int);

void func_0A2B80(void) {
    D_001F68A0[0] = 0;
    memset(D_002B1C08, 0, 0xc00);
    memset(D_0029F008, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_001F6894[0] = func_0A3CB8(D_001F64B0, D_001F64A0[0], 1, 0, 0, 0);
    D_001F6898[0] = func_0A3CB8(D_001F64B0, D_001F64A0[0], 1, 0, 0, 0);
}
