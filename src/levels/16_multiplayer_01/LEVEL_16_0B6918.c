/* LEVEL_16:0x0B6918 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_001AEC84;
extern void func_111DB0(int *p, int a1);

void func_0B6918(int *p)
{
    if (D_001AEC84 == 1) {
        func_111DB0(p, 0x1D);
    } else {
        func_111DB0(p, 0x1F);
    }
}
