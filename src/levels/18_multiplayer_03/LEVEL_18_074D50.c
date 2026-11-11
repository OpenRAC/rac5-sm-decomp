/* LEVEL_18:0x074D50 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_001A56B0;
extern int D_001A56AC;

int func_105B48(int a0);
int func_090C70(void);

void func_074D50(int a0, int *a1)
{
    if (D_001A56B0 == 0) {
        D_001A56B0 = 1;
        D_001A56AC = func_105B48(0x26215A62);
    }
    if ((func_090C70() & 7) == 1) {
        *a1 = D_001A56AC;
    }
}
