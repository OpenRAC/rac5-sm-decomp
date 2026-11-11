/* LEVEL_02:0x080428 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_0020B0D8;
extern char D_002247E0[];
extern char D_002247F0[];
extern char D_00224800[];
extern void func_0803C0();

void func_080428(void *a0, int a1, int a2)
{
    if (D_0020B0D8 < 0x10) {
        switch (a2) {
        case 0:
            func_0803C0(a0, a1, D_00224800);
            break;
        case 1:
            func_0803C0(a0, a1, D_002247E0);
            break;
        case 2:
            func_0803C0(a0, a1, D_002247F0);
            break;
        }
    }
}
