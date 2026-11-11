/* LEVEL_10:0x0D8EE8 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_0020F71C;
extern int D_0020F720;
extern int D_0020F72C;
extern int D_0020F738;
extern int func_0B71F8(int index);

void func_0D8EE8(int a0)
{
    int v;

    v = D_0020F738;
    D_0020F72C = 0;
    if (v != 0 && a0 == 0) {
        func_0B71F8(7);
    }
    D_0020F738 = 0;
    D_0020F71C = 0;
    D_0020F720 = 0;
}
