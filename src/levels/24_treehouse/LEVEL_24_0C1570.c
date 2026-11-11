/* LEVEL_24:0x0C1570 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_001D188C;
extern void func_12B1E0(int *p, int a1);

void func_0C1570(int *p)
{
    if (D_001D188C == 1) {
        func_12B1E0(p, 0x1D);
    } else {
        func_12B1E0(p, 0x1F);
    }
}
