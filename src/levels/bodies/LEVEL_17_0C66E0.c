/* LEVEL_17:0x0C66E0 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_001A7BCC;
extern int D_001A7BD0;
extern int D_001A7BDC;
extern int D_001A7BE8;
extern void func_0A4590(int a0);

void func_0C66E0(int a0)
{
    int v;

    v = D_001A7BE8;
    D_001A7BDC = 0;
    if (v != 0 && a0 == 0) {
        func_0A4590(7);
    }
    D_001A7BE8 = 0;
    D_001A7BCC = 0;
    D_001A7BD0 = 0;
}
