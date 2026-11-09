/* LEVEL_03:0x0D6B18 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_0021ECE4;
extern int D_0021ECF4;
extern int D_0021ECD4;
extern unsigned char D_0021ECFC;
extern int D_0021ECF0;

void func_0B5E08(int a0);

void func_0D6B18(int a0)
{
    int v;

    v = D_0021ECE4;
    D_0021ECF4 = 0;
    D_0021ECD4 = 0;
    D_0021ECFC = 0;
    if (v != 0 && a0 == 0) {
        func_0B5E08(7);
    }
    D_0021ECE4 = 0;
    D_0021ECF0 = 0;
}
