/* LEVEL_09:0x0AE720 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0AE8B8(void);
extern int func_124160(unsigned int kind, int count);
extern int D_002043F0;
extern int D_001E5F80;
extern char *D_001E5F88;
extern char D_001FB210[];
extern char D_001FB220[];
void func_0AE720(void)
{
    func_0AE8B8();
    D_001E5F80 = func_124160(0xA4F0459C, 8);
    switch (D_002043F0) {
    case 0x16: D_001E5F88 = D_001FB210; break;
    case 0x17: D_001E5F88 = D_001FB220; break;
    default: D_001E5F88 = 0; break;
    }
}
