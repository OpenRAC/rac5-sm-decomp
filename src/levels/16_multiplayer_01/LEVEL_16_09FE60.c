/* LEVEL_16:0x09FE60 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_09FF70(void);
extern int func_108008(unsigned int kind, int count);
extern int D_001D04A0;
extern int D_001AA1C0;
extern char *D_001AA1C8;
extern char D_001C6340[];
extern char D_001C6350[];
void func_09FE60(void)
{
    func_09FF70();
    D_001AA1C0 = func_108008(0xA4F0459C, 8);
    switch (D_001D04A0) {
    case 0x16: D_001AA1C8 = D_001C6340; break;
    case 0x17: D_001AA1C8 = D_001C6350; break;
    default: D_001AA1C8 = 0; break;
    }
}
