/* LEVEL_08:0x0D2BD0 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_00249ACC;
extern void func_146C18(int *p, int a1);

void func_0D2BD0(int *p)
{
    if (D_00249ACC == 1) {
        func_146C18(p, 0x1D);
    } else {
        func_146C18(p, 0x1F);
    }
}
