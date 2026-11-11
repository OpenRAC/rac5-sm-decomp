extern char D_002077C8[];
extern char D_001F4BC8[];
extern int D_00155C20[];
extern int D_00155820[];
extern char D_00155830[];
extern int D_00155C14[];
extern int D_00155C18[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0922C8(char *, int, int, int, int, int);

void func_091190(void) {
    D_00155C20[0] = 0;
    memset(D_002077C8, 0, 0xc00);
    memset(D_001F4BC8, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_00155C14[0] = func_0922C8(D_00155830, D_00155820[0], 1, 0, 0, 0);
    D_00155C18[0] = func_0922C8(D_00155830, D_00155820[0], 1, 0, 0, 0);
}
