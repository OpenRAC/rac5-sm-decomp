/* LEVEL_06:0x0D23A8 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_001F561C;
extern int D_001F5620;
extern int D_001F562C;
extern int D_001F5638;
extern int func_0B0848(int a);

void func_0D23A8(int a0)
{
    int v;

    v = D_001F5638;
    D_001F562C = 0;
    if (v != 0 && a0 == 0) {
        func_0B0848(7);
    }
    D_001F5638 = 0;
    D_001F561C = 0;
    D_001F5620 = 0;
}
