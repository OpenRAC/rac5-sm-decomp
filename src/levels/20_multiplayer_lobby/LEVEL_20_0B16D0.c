/* LEVEL_20:0x0B16D0 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_00116CAC;
extern int D_00116CB0;
extern int D_00116CBC;
extern int D_00116CC8;
extern int func_08F6B0(int a);

void func_0B16D0(int a0)
{
    int v;

    v = D_00116CC8;
    D_00116CBC = 0;
    if (v != 0 && a0 == 0) {
        func_08F6B0(7);
    }
    D_00116CC8 = 0;
    D_00116CAC = 0;
    D_00116CB0 = 0;
}
