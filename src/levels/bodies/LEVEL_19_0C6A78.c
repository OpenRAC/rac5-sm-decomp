/* LEVEL_19:0x0C6A78 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_001B574C;
extern int D_001B5750;
extern int D_001B575C;
extern int D_001B5768;
extern void func_0A4928(int a0);

void func_0C6A78(int a0)
{
    int v;

    v = D_001B5768;
    D_001B575C = 0;
    if (v != 0 && a0 == 0) {
        func_0A4928(7);
    }
    D_001B5768 = 0;
    D_001B574C = 0;
    D_001B5750 = 0;
}
