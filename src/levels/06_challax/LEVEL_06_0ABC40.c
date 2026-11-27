/* LEVEL_06:0x0ABC40 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0ABDD8(void);
extern int func_121820(unsigned int kind, int count);
extern int D_00209670;
extern int D_001EB080;
extern char *D_001EB088;
extern char D_00200490[];
extern char D_002004A0[];
void func_0ABC40(void)
{
    func_0ABDD8();
    D_001EB080 = func_121820(0xA4F0459C, 8);
    switch (D_00209670) {
    case 0x16: D_001EB088 = D_00200490; break;
    case 0x17: D_001EB088 = D_002004A0; break;
    default: D_001EB088 = 0; break;
    }
}
