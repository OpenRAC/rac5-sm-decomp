/* LEVEL_05:0x0C6908 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_001EFF8C;
extern int D_001EFF94;
extern void func_131058(int *p, int a1);

void func_0C6908(int *p)
{
    if (D_001EFF8C == 1) {
        func_131058(p, 0x1D);
    } else {
        D_001EFF94 = 0x11;
        func_131058(p, 0x13);
    }
}
