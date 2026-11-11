extern char D_00283048[];
extern char D_00270448[];
extern int D_001C9CA0[];
extern int D_001C98A0[];
extern char D_001C98B0[];
extern int D_001C9C94[];
extern int D_001C9C98[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_09A9F8(char *, int, int, int, int, int);

void func_0998C0(void) {
    D_001C9CA0[0] = 0;
    memset(D_00283048, 0, 0xc00);
    memset(D_00270448, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_001C9C94[0] = func_09A9F8(D_001C98B0, D_001C98A0[0], 1, 0, 0, 0);
    D_001C9C98[0] = func_09A9F8(D_001C98B0, D_001C98A0[0], 1, 0, 0, 0);
}
