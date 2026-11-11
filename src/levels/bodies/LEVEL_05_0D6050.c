/* LEVEL_05:0x0D6050 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_001F5A9C;
extern int D_001F5AA0;
extern int D_001F5AAC;
extern int D_001F5AB8;
extern int func_0B45C8(int a);

void func_0D6050(int a0)
{
    int v;

    v = D_001F5AB8;
    D_001F5AAC = 0;
    if (v != 0 && a0 == 0) {
        func_0B45C8(7);
    }
    D_001F5AB8 = 0;
    D_001F5A9C = 0;
    D_001F5AA0 = 0;
}
