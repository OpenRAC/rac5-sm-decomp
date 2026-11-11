/* LEVEL_05:0x0C6250 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_001EFF8C;
extern void func_131058(int *p, int a1);

void func_0C6250(int *p)
{
    if (D_001EFF8C == 1) {
        func_131058(p, 0x1D);
    } else {
        func_131058(p, 0x1F);
    }
}
