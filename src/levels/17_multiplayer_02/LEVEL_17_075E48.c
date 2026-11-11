/* LEVEL_17:0x075E48 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_00197830;
extern int D_0019782C;

int func_106410(int a0);
int func_091158(void);

void func_075E48(int a0, int *a1)
{
    if (D_00197830 == 0) {
        D_00197830 = 1;
        D_0019782C = func_106410(0x26215A62);
    }
    if ((func_091158() & 7) == 1) {
        *a1 = D_0019782C;
    }
}
