/* LEVEL_09:0x0C4F58 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_001EAA0C;
extern void func_12E678(int *p, int a1);

void func_0C4F58(int *p)
{
    if (D_001EAA0C == 1) {
        func_12E678(p, 0x1D);
    } else {
        func_12E678(p, 0x1F);
    }
}
