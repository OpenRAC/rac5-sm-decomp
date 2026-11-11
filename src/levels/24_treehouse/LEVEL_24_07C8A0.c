/* LEVEL_24:0x07C8A0 -- placement copy of LEVEL_01_082CD8.c: latches a one-time result word into a global, then stores it through the second argument when a status check passes. */

extern unsigned char D_001C6E80;
extern int D_001C6E7C;

int func_11FB68(int a0);
int func_09C278(void);

void func_07C8A0(int a0, int *a1)
{
    if (D_001C6E80 == 0) {
        D_001C6E80 = 1;
        D_001C6E7C = func_11FB68(0x26215A62);
    }
    if ((func_09C278() & 7) == 1) {
        *a1 = D_001C6E7C;
    }
}
