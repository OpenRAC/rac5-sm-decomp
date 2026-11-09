/* LEVEL_23:0x0CE8D8 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_001D9B1C;
extern int D_001D9B20;
extern int D_001D9B2C;
extern int D_001D9B38;
extern void func_0ACDE8(int a0);

void func_0CE8D8(int a0)
{
    int v;

    v = D_001D9B38;
    D_001D9B2C = 0;
    if (v != 0 && a0 == 0) {
        func_0ACDE8(7);
    }
    D_001D9B38 = 0;
    D_001D9B1C = 0;
    D_001D9B20 = 0;
}
