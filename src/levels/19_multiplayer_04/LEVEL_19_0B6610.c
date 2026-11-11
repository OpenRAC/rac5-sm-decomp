/* LEVEL_19:0x0B6610 -- placement copy of LEVEL_01_0C80C8.c: picks the follow-up request for the object from two global modes (8 in mode 1, 0x13 with a flag that also latches 0x1D, 0x1E otherwise). */
extern int D_001AFE04;
extern unsigned char D_001AFDA8;
extern int D_001AFE0C;
extern void func_112450(int *p, int a1);

void func_0B6610(int *o)
{
    if (D_001AFE04 == 1) {
        func_112450(o, 8);
    } else if (D_001AFDA8 != 0) {
        D_001AFE0C = 0x1D;
        func_112450(o, 0x13);
    } else {
        func_112450(o, 0x1E);
    }
}
