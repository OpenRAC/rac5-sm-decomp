/* LEVEL_20:0x063A70 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_00106910;
extern int D_0010690C;

int func_0DEBE0(int a0);
int func_07C358(void);

void func_063A70(int a0, int *a1)
{
    if (D_00106910 == 0) {
        D_00106910 = 1;
        D_0010690C = func_0DEBE0(0x26215A62);
    }
    if ((func_07C358() & 7) == 1) {
        *a1 = D_0010690C;
    }
}
