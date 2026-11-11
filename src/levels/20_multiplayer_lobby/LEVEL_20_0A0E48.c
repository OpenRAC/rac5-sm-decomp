/* LEVEL_20:0x0A0E48 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_00111364;
extern void func_0E4B98(int *p, int a1);

void func_0A0E48(int *p)
{
    if (D_00111364 == 1) {
        func_0E4B98(p, 0x1D);
    } else {
        func_0E4B98(p, 0x1F);
    }
}
