/* LEVEL_07:0x0D9B08 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_0021AA1C;
extern int D_0021AA20;
extern int D_0021AA2C;
extern int D_0021AA38;
extern void func_0B8080(int a0);

void func_0D9B08(int a0)
{
    int v;

    v = D_0021AA38;
    D_0021AA2C = 0;
    if (v != 0 && a0 == 0) {
        func_0B8080(7);
    }
    D_0021AA38 = 0;
    D_0021AA1C = 0;
    D_0021AA20 = 0;
}
