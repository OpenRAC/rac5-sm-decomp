/* LEVEL_21:0x0B80E8 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_0015B39C;
extern int D_0015B3A0;
extern int D_0015B3AC;
extern int D_0015B3B8;
extern int func_096530(int index);

void func_0B80E8(int a0)
{
    int v;

    v = D_0015B3B8;
    D_0015B3AC = 0;
    if (v != 0 && a0 == 0) {
        func_096530(7);
    }
    D_0015B3B8 = 0;
    D_0015B39C = 0;
    D_0015B3A0 = 0;
}
