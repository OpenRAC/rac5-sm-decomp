/* LEVEL_09:0x0C58F0 -- placement copy of LEVEL_01_0C8640.c: runs the setter on the argument with 8 when the global mode is 1, otherwise with 0x1D. */
extern int D_001EAA0C;
extern void func_12E678(int *p, int a1);

void func_0C58F0(int *p)
{
    if (D_001EAA0C == 1) {
        func_12E678(p, 8);
    } else {
        func_12E678(p, 0x1D);
    }
}
