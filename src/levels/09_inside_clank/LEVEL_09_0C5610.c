/* LEVEL_09:0x0C5610 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_001EAA0C;
extern int D_001EAA14;
extern void func_12E678(int *p, int a1);

void func_0C5610(int *p)
{
    if (D_001EAA0C == 1) {
        func_12E678(p, 0x1D);
    } else {
        D_001EAA14 = 0x11;
        func_12E678(p, 0x13);
    }
}
