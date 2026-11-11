/* LEVEL_03:0x082B58 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_0020E880;
extern int D_0020E87C;

int func_1282D0(int a0);
int func_0A2780(void);

void func_082B58(int a0, int *a1)
{
    if (D_0020E880 == 0) {
        D_0020E880 = 1;
        D_0020E87C = func_1282D0(0x26215A62);
    }
    if ((func_0A2780() & 7) == 1) {
        *a1 = D_0020E87C;
    }
}
