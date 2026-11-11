/* LEVEL_02:0x0DE438 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_0021B6DC;
extern int D_0021B6E0;
extern int D_0021B6EC;
extern int D_0021B6F8;
extern int func_0BC930(int index);

void func_0DE438(int a0)
{
    int v;

    v = D_0021B6F8;
    D_0021B6EC = 0;
    if (v != 0 && a0 == 0) {
        func_0BC930(7);
    }
    D_0021B6F8 = 0;
    D_0021B6DC = 0;
    D_0021B6E0 = 0;
}
