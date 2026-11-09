/* FRONTEND:0x0158F8 -- clears several state words and calls one helper when a flag word is set. */

extern int D_00030354;
extern int D_00030358;
extern int D_00030364;
extern int D_00030370;
extern void func_0145C8(int a0);

void func_0158F8(int a0)
{
    int v;

    v = D_00030370;
    D_00030364 = 0;
    if (v != 0 && a0 == 0) {
        func_0145C8(7);
    }
    D_00030370 = 0;
    D_00030354 = 0;
    D_00030358 = 0;
}
