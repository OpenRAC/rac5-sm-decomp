/* LEVEL_15:0x091D38 -- placement copy of LEVEL_01_0B1470.c: resets the shared table state, loads the resource handle and selects the table pointer for the current mode. */
extern void func_091ED0(void);
extern int func_0EEFF0(unsigned int kind, int count);
extern int D_0016EF70;
extern int D_00150E00;
extern char *D_00150E08;
extern char D_00165D90[];
extern char D_00165DA0[];
void func_091D38(void)
{
    func_091ED0();
    D_00150E00 = func_0EEFF0(0xA4F0459C, 8);
    switch (D_0016EF70) {
    case 0x16: D_00150E08 = D_00165D90; break;
    case 0x17: D_00150E08 = D_00165DA0; break;
    default: D_00150E08 = 0; break;
    }
}
