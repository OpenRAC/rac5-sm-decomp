/* LEVEL_22:0x074AD8 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_00155580;
extern int D_0015557C;

int func_100C58(int a0);
int func_091010(void);

void func_074AD8(int a0, int *a1)
{
    if (D_00155580 == 0) {
        D_00155580 = 1;
        D_0015557C = func_100C58(0x26215A62);
    }
    if ((func_091010() & 7) == 1) {
        *a1 = D_0015557C;
    }
}
