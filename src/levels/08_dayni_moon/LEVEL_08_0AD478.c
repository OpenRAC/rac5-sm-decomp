extern char D_00300E88[];
extern char D_002EE288[];
extern int D_0023F760[];
extern int D_0023F360[];
extern char D_0023F370[];
extern int D_0023F754[];
extern int D_0023F758[];
extern int g_TEXMGR_LastTex;

void *memset(void *, int, unsigned int);
int func_0AE5B0(char *, int, int, int, int, int);

void func_0AD478(void) {
    D_0023F760[0] = 0;
    memset(D_00300E88, 0, 0xc00);
    memset(D_002EE288, 0, 0x12c00);
    g_TEXMGR_LastTex = 0xBEBEBEBE;
    D_0023F754[0] = func_0AE5B0(D_0023F370, D_0023F360[0], 1, 0, 0, 0);
    D_0023F758[0] = func_0AE5B0(D_0023F370, D_0023F360[0], 1, 0, 0, 0);
}
