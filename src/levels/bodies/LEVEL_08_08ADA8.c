/* LEVEL_08:0x08ADA8 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_0023F0C0;
extern int D_0023F0BC;

int func_13B5A0(int a0);
int func_0AD2F8(void);

void func_08ADA8(int a0, int *a1)
{
    if (D_0023F0C0 == 0) {
        D_0023F0C0 = 1;
        D_0023F0BC = func_13B5A0(0x26215A62);
    }
    if ((func_0AD2F8() & 7) == 1) {
        *a1 = D_0023F0BC;
    }
}
