/* LEVEL_18:0x09EE70 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_09EF80(void);
extern int func_106CB8(unsigned int kind, int count);
extern int D_001D1A20;
extern int D_001AB640;
extern char *D_001AB648;
extern char D_001C78C0[];
extern char D_001C78D0[];
void func_09EE70(void)
{
    func_09EF80();
    D_001AB640 = func_106CB8(0xA4F0459C, 8);
    switch (D_001D1A20) {
    case 0x16: D_001AB648 = D_001C78C0; break;
    case 0x17: D_001AB648 = D_001C78D0; break;
    default: D_001AB648 = 0; break;
    }
}
