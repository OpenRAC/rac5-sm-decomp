/* LEVEL_22:0x09FA80 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_09FC88(void);
extern int func_101DB8(unsigned int kind, int count);
extern int D_00177C70;
extern int D_0015B500;
extern char *D_0015B508;
extern char D_0016EA90[];
extern char D_0016EAA0[];
void func_09FA80(void)
{
    func_09FC88();
    D_0015B500 = func_101DB8(0xA4F0459C, 8);
    switch (D_00177C70) {
    case 0x16: D_0015B508 = D_0016EA90; break;
    case 0x17: D_0015B508 = D_0016EAA0; break;
    default: D_0015B508 = 0; break;
    }
}
