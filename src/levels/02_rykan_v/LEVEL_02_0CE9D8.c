/* LEVEL_02:0x0CE9D8 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_00215BCC;
extern unsigned char D_00215B70;
extern int D_00215BD4;
extern void func_13BA90(int *p, int a1);

void func_0CE9D8(int *o)
{
    if (D_00215BCC == 1) {
        func_13BA90(o, 8);
    } else if (D_00215B70 != 0) {
        D_00215BD4 = 0x1D;
        func_13BA90(o, 0x13);
    } else {
        func_13BA90(o, 0x1E);
    }
}
