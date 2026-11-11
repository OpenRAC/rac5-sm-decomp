/* LEVEL_23:0x0BEA48 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_001D400C;
extern void func_126E58(int *p, int a1);

void func_0BEA48(int *p)
{
    if (D_001D400C == 1) {
        func_126E58(p, 0x1D);
    } else {
        func_126E58(p, 0x1F);
    }
}
