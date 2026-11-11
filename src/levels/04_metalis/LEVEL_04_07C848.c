/* LEVEL_04:0x07C848 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_0020F5D8;
extern char D_002291E0[];
extern char D_002291F0[];
extern char D_00229200[];
extern void func_07C7E0();

void func_07C848(void *a0, int a1, int a2)
{
    if (D_0020F5D8 < 0x10) {
        switch (a2) {
        case 0:
            func_07C7E0(a0, a1, D_00229200);
            break;
        case 1:
            func_07C7E0(a0, a1, D_002291E0);
            break;
        case 2:
            func_07C7E0(a0, a1, D_002291F0);
            break;
        }
    }
}
