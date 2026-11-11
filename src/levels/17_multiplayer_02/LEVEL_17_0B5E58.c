/* LEVEL_17:0x0B5E58 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_001A2284;
extern void func_111328(int *p, int a1);

void func_0B5E58(int *p)
{
    if (D_001A2284 == 1) {
        func_111328(p, 0x1D);
    } else {
        func_111328(p, 0x1F);
    }
}
