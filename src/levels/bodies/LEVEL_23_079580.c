/* LEVEL_23:0x079580 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_001C9600;
extern int D_001C95FC;

int func_11AEE0(int a0);
int func_099740(void);

void func_079580(int a0, int *a1)
{
    if (D_001C9600 == 0) {
        D_001C9600 = 1;
        D_001C95FC = func_11AEE0(0x26215A62);
    }
    if ((func_099740() & 7) == 1) {
        *a1 = D_001C95FC;
    }
}
