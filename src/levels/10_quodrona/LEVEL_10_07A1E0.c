/* LEVEL_10:0x07A1E0 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_001FF118;
extern char D_002187E0[];
extern char D_002187F0[];
extern char D_00218800[];
extern void func_07A178();

void func_07A1E0(void *a0, int a1, int a2)
{
    if (D_001FF118 < 0x10) {
        switch (a2) {
        case 0:
            func_07A178(a0, a1, D_00218800);
            break;
        case 1:
            func_07A178(a0, a1, D_002187E0);
            break;
        case 2:
            func_07A178(a0, a1, D_002187F0);
            break;
        }
    }
}
