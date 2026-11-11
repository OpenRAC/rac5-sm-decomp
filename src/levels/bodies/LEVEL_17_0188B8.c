/* LEVEL_17:0x0188B8 -- placement copy of LEVEL_16_018F38.c: runs a one-time setup once per flag, choosing one of two helper paths from a global state word. */

extern unsigned char D_0018E4A5[];
extern int D_001C3920;
extern int D_001AF190;

extern void func_1212C8(void);
extern int func_10F088(void);
extern int func_0AAD48(int a, int b);
extern void func_018518(int a0, int a1);

void func_0188B8(void)
{
    int v;

    if (D_0018E4A5[0] != 0) {
        return;
    }
    v = D_001C3920;
    D_0018E4A5[0] = 1;
    if (v == 0x14) {
        func_1212C8();
        func_10F088();
        D_001AF190 = 1;
        func_0AAD48(0x33, 0);
    } else {
        func_018518(4, 0);
    }
}
