/* LEVEL_09:0x0D4D58 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_001F051C;
extern int D_001F0520;
extern int D_001F052C;
extern int D_001F0538;
extern void func_0B32D0(int a0);

void func_0D4D58(int a0)
{
    int v;

    v = D_001F0538;
    D_001F052C = 0;
    if (v != 0 && a0 == 0) {
        func_0B32D0(7);
    }
    D_001F0538 = 0;
    D_001F051C = 0;
    D_001F0520 = 0;
}
