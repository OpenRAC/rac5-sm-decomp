/* LEVEL_20:0x0A1268 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_00111364;
extern unsigned char D_00111308;
extern int D_0011136C;
extern void func_0E4B98(int *p, int a1);

void func_0A1268(int *o)
{
    if (D_00111364 == 1) {
        func_0E4B98(o, 8);
    } else if (D_00111308 != 0) {
        D_0011136C = 0x1D;
        func_0E4B98(o, 0x13);
    } else {
        func_0E4B98(o, 0x1E);
    }
}
