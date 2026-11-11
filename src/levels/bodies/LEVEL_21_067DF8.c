/* LEVEL_21:0x067DF8 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_0014AE80;
extern int D_0014AE7C;

int func_0EDE90(int a0);
int func_0832F8(void);

void func_067DF8(int a0, int *a1)
{
    if (D_0014AE80 == 0) {
        D_0014AE80 = 1;
        D_0014AE7C = func_0EDE90(0x26215A62);
    }
    if ((func_0832F8() & 7) == 1) {
        *a1 = D_0014AE7C;
    }
}
