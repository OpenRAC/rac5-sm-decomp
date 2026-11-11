/* LEVEL_09:0x07F710 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_001E0000;
extern int D_001DFFFC;

int func_123000(int a0);
int func_09FCB0(void);

void func_07F710(int a0, int *a1)
{
    if (D_001E0000 == 0) {
        D_001E0000 = 1;
        D_001DFFFC = func_123000(0x26215A62);
    }
    if ((func_09FCB0() & 7) == 1) {
        *a1 = D_001DFFFC;
    }
}
