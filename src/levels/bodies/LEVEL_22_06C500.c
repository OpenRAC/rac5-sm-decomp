/* LEVEL_22:0x06C500 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_00155498;
extern char D_0016CCE0[];
extern char D_0016CCF0[];
extern char D_0016CD00[];
extern void func_06C498();

void func_06C500(void *a0, int a1, int a2)
{
    if (D_00155498 < 0x10) {
        switch (a2) {
        case 0:
            func_06C498(a0, a1, D_0016CD00);
            break;
        case 1:
            func_06C498(a0, a1, D_0016CCE0);
            break;
        case 2:
            func_06C498(a0, a1, D_0016CCF0);
            break;
        }
    }
}
