/* LEVEL_03:0x0D7890 -- placement copy of FRONTEND_0158F8.c: clears several state words and calls one helper when a flag word is set. */

extern int D_0021ED9C;
extern int D_0021EDA0;
extern int D_0021EDAC;
extern int D_0021EDB8;
extern int func_0B5E08(int index);

void func_0D7890(int a0)
{
    int v;

    v = D_0021EDB8;
    D_0021EDAC = 0;
    if (v != 0 && a0 == 0) {
        func_0B5E08(7);
    }
    D_0021EDB8 = 0;
    D_0021ED9C = 0;
    D_0021EDA0 = 0;
}
