/* LEVEL_03:0x079938 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_0020E798;
extern char D_00228760[];
extern char D_00228770[];
extern char D_00228780[];
extern void func_0798D0();

void func_079938(void *a0, int a1, int a2)
{
    if (D_0020E798 < 0x10) {
        switch (a2) {
        case 0:
            func_0798D0(a0, a1, D_00228780);
            break;
        case 1:
            func_0798D0(a0, a1, D_00228760);
            break;
        case 2:
            func_0798D0(a0, a1, D_00228770);
            break;
        }
    }
}
