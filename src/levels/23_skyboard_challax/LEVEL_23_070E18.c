/* LEVEL_23:0x070E18 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_001C9518;
extern char D_001E29E0[];
extern char D_001E29F0[];
extern char D_001E2A00[];
extern void func_070DB0();

void func_070E18(void *a0, int a1, int a2)
{
    if (D_001C9518 < 0x10) {
        switch (a2) {
        case 0:
            func_070DB0(a0, a1, D_001E2A00);
            break;
        case 1:
            func_070DB0(a0, a1, D_001E29E0);
            break;
        case 2:
            func_070DB0(a0, a1, D_001E29F0);
            break;
        }
    }
}
