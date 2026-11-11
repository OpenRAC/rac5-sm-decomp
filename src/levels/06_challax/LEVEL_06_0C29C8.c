/* LEVEL_06:0x0C29C8 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_001EFB0C;
extern unsigned char D_001EFAB0;
extern int D_001EFB14;
extern void func_12BDB0(int *p, int a1);

void func_0C29C8(int *o)
{
    if (D_001EFB0C == 1) {
        func_12BDB0(o, 8);
    } else if (D_001EFAB0 != 0) {
        D_001EFB14 = 0x1D;
        func_12BDB0(o, 0x13);
    } else {
        func_12BDB0(o, 0x1E);
    }
}
