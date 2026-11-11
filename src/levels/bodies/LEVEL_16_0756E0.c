/* LEVEL_16:0x0756E0 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_001A4230;
extern int D_001A422C;

int func_106E98(int a0);
int func_091C60(void);

void func_0756E0(int a0, int *a1)
{
    if (D_001A4230 == 0) {
        D_001A4230 = 1;
        D_001A422C = func_106E98(0x26215A62);
    }
    if ((func_091C60() & 7) == 1) {
        *a1 = D_001A422C;
    }
}
