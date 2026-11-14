/* LEVEL_02:0x0CEC70 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_00215BCC;
extern int D_00215BD4;
extern void func_13BA90(int *p, int a1);

void func_0CEC70(int *p)
{
    if (D_00215BCC == 1) {
        func_13BA90(p, 0x1D);
    } else {
        D_00215BD4 = 0x11;
        func_13BA90(p, 0x13);
    }
}
