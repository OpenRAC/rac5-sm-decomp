/* LEVEL_24:0x0742A8 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_001C6D98;
extern char D_001E05E0[];
extern char D_001E05F0[];
extern char D_001E0600[];
extern void func_074240();

void func_0742A8(void *a0, int a1, int a2)
{
    if (D_001C6D98 < 0x10) {
        switch (a2) {
        case 0:
            func_074240(a0, a1, D_001E0600);
            break;
        case 1:
            func_074240(a0, a1, D_001E05E0);
            break;
        case 2:
            func_074240(a0, a1, D_001E05F0);
            break;
        }
    }
}
