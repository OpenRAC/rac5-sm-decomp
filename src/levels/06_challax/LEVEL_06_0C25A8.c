/* LEVEL_06:0x0C25A8 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_001EFB0C;
extern void func_12BDB0(int *p, int a1);

void func_0C25A8(int *p)
{
    if (D_001EFB0C == 1) {
        func_12BDB0(p, 0x1D);
    } else {
        func_12BDB0(p, 0x1F);
    }
}
