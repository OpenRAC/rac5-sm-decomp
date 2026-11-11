/* LEVEL_04:0x0DD368 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_0021FBDC;
extern int D_0021FBE0;
extern int D_0021FBEC;
extern int D_0021FBF8;
extern int func_0BB828(int index);

void func_0DD368(int a0)
{
    int v;

    v = D_0021FBF8;
    D_0021FBEC = 0;
    if (v != 0 && a0 == 0) {
        func_0BB828(7);
    }
    D_0021FBF8 = 0;
    D_0021FBDC = 0;
    D_0021FBE0 = 0;
}
