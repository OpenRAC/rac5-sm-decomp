/* LEVEL_07:0x07BD30 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_0020A418;
extern char D_00224560[];
extern char D_00224570[];
extern char D_00224580[];
extern void func_07BCC8();

void func_07BD30(void *a0, int a1, int a2)
{
    if (D_0020A418 < 0x10) {
        switch (a2) {
        case 0:
            func_07BCC8(a0, a1, D_00224580);
            break;
        case 1:
            func_07BCC8(a0, a1, D_00224560);
            break;
        case 2:
            func_07BCC8(a0, a1, D_00224570);
            break;
        }
    }
}
