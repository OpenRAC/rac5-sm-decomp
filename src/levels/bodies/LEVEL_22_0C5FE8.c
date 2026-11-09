/* LEVEL_22:0x0C5FE8 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_00165A9C;
extern int D_00165AA0;
extern int D_00165AAC;
extern int D_00165AB8;
extern void func_0A4570(int a0);

void func_0C5FE8(int a0)
{
    int v;

    v = D_00165AB8;
    D_00165AAC = 0;
    if (v != 0 && a0 == 0) {
        func_0A4570(7);
    }
    D_00165AB8 = 0;
    D_00165A9C = 0;
    D_00165AA0 = 0;
}
