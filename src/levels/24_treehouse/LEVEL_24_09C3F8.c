extern char D_0027DAC8[];
extern char D_0026AEC8[];
extern int D_001C7520[];
extern int D_001C7120[];
extern char D_001C7130[];
extern int D_001C7514[];
extern int D_001C7518[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_09D530(char *, int, int, int, int, int);

void func_09C3F8(void) {
    D_001C7520[0] = 0;
    memset(D_0027DAC8, 0, 0xc00);
    memset(D_0026AEC8, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_001C7514[0] = func_09D530(D_001C7130, D_001C7120[0], 1, 0, 0, 0);
    D_001C7518[0] = func_09D530(D_001C7130, D_001C7120[0], 1, 0, 0, 0);
}
