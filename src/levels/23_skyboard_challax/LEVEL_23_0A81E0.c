/* LEVEL_23:0x0A81E0 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_0A83E8(void);
extern int func_11C040(unsigned int kind, int count);
extern int D_001ED970;
extern int D_001CF580;
extern char *D_001CF588;
extern char D_001E4790[];
extern char D_001E47A0[];
void func_0A81E0(void)
{
    func_0A83E8();
    D_001CF580 = func_11C040(0xA4F0459C, 8);
    switch (D_001ED970) {
    case 0x16: D_001CF588 = D_001E4790; break;
    case 0x17: D_001CF588 = D_001E47A0; break;
    default: D_001CF588 = 0; break;
    }
}
