/* LEVEL_09:0x0C5378 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_001EAA0C;
extern unsigned char D_001EA9B0;
extern int D_001EAA14;
extern void func_12E678(int *p, int a1);

void func_0C5378(int *o)
{
    if (D_001EAA0C == 1) {
        func_12E678(o, 8);
    } else if (D_001EA9B0 != 0) {
        D_001EAA14 = 0x1D;
        func_12E678(o, 0x13);
    } else {
        func_12E678(o, 0x1E);
    }
}
