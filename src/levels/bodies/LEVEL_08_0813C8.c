/* LEVEL_08:0x0813C8 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_0023EFD8;
extern char D_002594E0[];
extern char D_002594F0[];
extern char D_00259500[];
extern void func_081360();

void func_0813C8(void *a0, int a1, int a2)
{
    if (D_0023EFD8 < 0x10) {
        switch (a2) {
        case 0:
            func_081360(a0, a1, D_00259500);
            break;
        case 1:
            func_081360(a0, a1, D_002594E0);
            break;
        case 2:
            func_081360(a0, a1, D_002594F0);
            break;
        }
    }
}
