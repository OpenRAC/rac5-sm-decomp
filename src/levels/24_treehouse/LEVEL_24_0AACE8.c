/* LEVEL_24:0x0AACE8 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0AAE80(void);
extern int func_120CC8(unsigned int kind, int count);
extern int D_001EB570;
extern int D_001CCE00;
extern char *D_001CCE08;
extern char D_001E2390[];
extern char D_001E23A0[];
void func_0AACE8(void)
{
    func_0AAE80();
    D_001CCE00 = func_120CC8(0xA4F0459C, 8);
    switch (D_001EB570) {
    case 0x16: D_001CCE08 = D_001E2390; break;
    case 0x17: D_001CCE08 = D_001E23A0; break;
    default: D_001CCE08 = 0; break;
    }
}
