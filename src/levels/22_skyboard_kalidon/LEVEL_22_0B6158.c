/* LEVEL_22:0x0B6158 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_0015FF8C;
extern void func_10CBB0(int *p, int a1);

void func_0B6158(int *p)
{
    if (D_0015FF8C == 1) {
        func_10CBB0(p, 0x1D);
    } else {
        func_10CBB0(p, 0x1F);
    }
}
