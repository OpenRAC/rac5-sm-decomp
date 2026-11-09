/* LEVEL_07:0x0D8D90 -- placement copy of FRONTEND_013EC0.c: clears several status words and, when a handle is set and the argument is zero, calls a helper with a fixed code before clearing the handle slot. */

extern int D_0021A964;
extern int D_0021A974;
extern int D_0021A954;
extern unsigned char D_0021A97C;
extern int D_0021A970;

void func_0B8080(int a0);

void func_0D8D90(int a0)
{
    int v;

    v = D_0021A964;
    D_0021A974 = 0;
    D_0021A954 = 0;
    D_0021A97C = 0;
    if (v != 0 && a0 == 0) {
        func_0B8080(7);
    }
    D_0021A964 = 0;
    D_0021A970 = 0;
}
