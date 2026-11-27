/* LEVEL_20:0x08A558 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_08A668(void);
extern int func_0DFD50(unsigned int kind, int count);
extern int D_00131510;
extern int D_0010C8A0;
extern char *D_0010C8A8;
extern char D_001273C0[];
extern char D_001273D0[];
void func_08A558(void)
{
    func_08A668();
    D_0010C8A0 = func_0DFD50(0xA4F0459C, 8);
    switch (D_00131510) {
    case 0x16: D_0010C8A8 = D_001273C0; break;
    case 0x17: D_0010C8A8 = D_001273D0; break;
    default: D_0010C8A8 = 0; break;
    }
}
