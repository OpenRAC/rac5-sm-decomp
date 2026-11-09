/* LEVEL_06:0x072FC8 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_001E5018;
extern char D_001FE6E0[];
extern char D_001FE6F0[];
extern char D_001FE700[];
extern void func_072F60();

void func_072FC8(void *a0, int a1, int a2)
{
    if (D_001E5018 < 0x10) {
        switch (a2) {
        case 0:
            func_072F60(a0, a1, D_001FE700);
            break;
        case 1:
            func_072F60(a0, a1, D_001FE6E0);
            break;
        case 2:
            func_072F60(a0, a1, D_001FE6F0);
            break;
        }
    }
}
