/* LEVEL_05:0x077238 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_001E5498;
extern char D_001FE760[];
extern char D_001FE770[];
extern char D_001FE780[];
extern void func_0771D0();

void func_077238(void *a0, int a1, int a2)
{
    if (D_001E5498 < 0x10) {
        switch (a2) {
        case 0:
            func_0771D0(a0, a1, D_001FE780);
            break;
        case 1:
            func_0771D0(a0, a1, D_001FE760);
            break;
        case 2:
            func_0771D0(a0, a1, D_001FE770);
            break;
        }
    }
}
