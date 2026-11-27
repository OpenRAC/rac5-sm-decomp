/* LEVEL_05:0x0AFA30 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0AFBC8(void);
extern int func_126B40(unsigned int kind, int count);
extern int D_002096F0;
extern int D_001EB500;
extern char *D_001EB508;
extern char D_00200510[];
extern char D_00200520[];
void func_0AFA30(void)
{
    func_0AFBC8();
    D_001EB500 = func_126B40(0xA4F0459C, 8);
    switch (D_002096F0) {
    case 0x16: D_001EB508 = D_00200510; break;
    case 0x17: D_001EB508 = D_00200520; break;
    default: D_001EB508 = 0; break;
    }
}
