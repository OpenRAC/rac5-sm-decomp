/* LEVEL_20:0x0A0F00 -- placement copy of LEVEL_01_0C7D60.c: picks the menu transition by the global mode: mode 1 runs transition 10; otherwise it raises the word flag 0x1D and runs 0x13 when the byte flag is set, else runs 0x1E. */
extern int D_00111364;
extern unsigned char D_00111308;
extern int D_0011136C;
extern void func_0E4B98(int *p, int a1);

void func_0A0F00(int *p)
{
    if (D_00111364 == 1) {
        func_0E4B98(p, 10);
    } else if (D_00111308 != 0) {
        D_0011136C = 0x1D;
        func_0E4B98(p, 0x13);
    } else {
        func_0E4B98(p, 0x1E);
    }
}
