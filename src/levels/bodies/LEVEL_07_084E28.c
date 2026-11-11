/* LEVEL_07:0x084E28 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_0020A500;
extern int D_0020A4FC;

int func_12D068(int a0);
int func_0A4A00(void);

void func_084E28(int a0, int *a1)
{
    if (D_0020A500 == 0) {
        D_0020A500 = 1;
        D_0020A4FC = func_12D068(0x26215A62);
    }
    if ((func_0A4A00() & 7) == 1) {
        *a1 = D_0020A4FC;
    }
}
