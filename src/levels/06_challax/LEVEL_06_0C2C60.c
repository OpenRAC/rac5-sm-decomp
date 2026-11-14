/* LEVEL_06:0x0C2C60 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_001EFB0C;
extern int D_001EFB14;
extern void func_12BDB0(int *p, int a1);

void func_0C2C60(int *p)
{
    if (D_001EFB0C == 1) {
        func_12BDB0(p, 0x1D);
    } else {
        D_001EFB14 = 0x11;
        func_12BDB0(p, 0x13);
    }
}
