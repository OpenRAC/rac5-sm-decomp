/* LEVEL_16:0x0C71A0 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_001B45CC;
extern int D_001B45D0;
extern int D_001B45DC;
extern int D_001B45E8;
extern int func_0A50B0(int index);

void func_0C71A0(int a0)
{
    int v;

    v = D_001B45E8;
    D_001B45DC = 0;
    if (v != 0 && a0 == 0) {
        func_0A50B0(7);
    }
    D_001B45E8 = 0;
    D_001B45CC = 0;
    D_001B45D0 = 0;
}
