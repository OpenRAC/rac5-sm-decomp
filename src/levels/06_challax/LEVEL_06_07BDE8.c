/* LEVEL_06:0x07BDE8 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_001E5100;
extern int D_001E50FC;

int func_1206C0(int a0);
int func_09D1D0(void);

void func_07BDE8(int a0, int *a1)
{
    if (D_001E5100 == 0) {
        D_001E5100 = 1;
        D_001E50FC = func_1206C0(0x26215A62);
    }
    if ((func_09D1D0() & 7) == 1) {
        *a1 = D_001E50FC;
    }
}
