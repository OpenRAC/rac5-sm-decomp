/* LEVEL_10:0x0C90E8 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_00209C0C;
extern void func_133560(int *p, int a1);

void func_0C90E8(int *p)
{
    if (D_00209C0C == 1) {
        func_133560(p, 0x1D);
    } else {
        func_133560(p, 0x1F);
    }
}
