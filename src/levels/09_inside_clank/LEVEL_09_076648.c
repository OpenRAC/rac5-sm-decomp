/* LEVEL_09:0x076648 -- placement copy of LEVEL_01_079B40.c: dispatches one of three table entries for a small mode index when a global count is below 16. */

extern unsigned int D_001DFF18;
extern char D_001F9460[];
extern char D_001F9470[];
extern char D_001F9480[];
extern void func_0765E0();

void func_076648(void *a0, int a1, int a2)
{
    if (D_001DFF18 < 0x10) {
        switch (a2) {
        case 0:
            func_0765E0(a0, a1, D_001F9480);
            break;
        case 1:
            func_0765E0(a0, a1, D_001F9460);
            break;
        case 2:
            func_0765E0(a0, a1, D_001F9470);
            break;
        }
    }
}
