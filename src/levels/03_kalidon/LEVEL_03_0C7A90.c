/* LEVEL_03:0x0C7A90 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_0021928C;
extern void func_133AA8(int *p, int a1);

void func_0C7A90(int *p)
{
    if (D_0021928C == 1) {
        func_133AA8(p, 0x1D);
    } else {
        func_133AA8(p, 0x1F);
    }
}
