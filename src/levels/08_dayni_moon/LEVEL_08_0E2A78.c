/* LEVEL_08:0x0E2A78 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_0024F5DC;
extern int D_0024F5E0;
extern int D_0024F5EC;
extern int D_0024F5F8;
extern int func_0C0F10(int a);

void func_0E2A78(int a0)
{
    int v;

    v = D_0024F5F8;
    D_0024F5EC = 0;
    if (v != 0 && a0 == 0) {
        func_0C0F10(7);
    }
    D_0024F5F8 = 0;
    D_0024F5DC = 0;
    D_0024F5E0 = 0;
}
