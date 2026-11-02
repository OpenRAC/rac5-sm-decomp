extern char D_002BB008[];
extern char D_002A8408[];
extern int D_001FF8A0[];
extern int D_001FF4A0[];
extern char D_001FF4B0[];
extern int D_001FF894[];
extern int D_001FF898[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0A4DD0(char *, int, int, int, int, int);

void func_0A3C98(void) {
    D_001FF8A0[0] = 0;
    memset(D_002BB008, 0, 0xc00);
    memset(D_002A8408, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_001FF894[0] = func_0A4DD0(D_001FF4B0, D_001FF4A0[0], 1, 0, 0, 0);
    D_001FF898[0] = func_0A4DD0(D_001FF4B0, D_001FF4A0[0], 1, 0, 0, 0);
}
