/* LEVEL_10:0x0C9420 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_00209C0C;
extern unsigned char D_00209BB0;
extern int D_00209C14;
extern void func_133560(int *p, int a1);

void func_0C9420(int *p)
{
    if (D_00209C0C == 1) {
        func_133560(p, 12);
    } else if (D_00209BB0 != 0) {
        D_00209C14 = 29;
        func_133560(p, 19);
    } else {
        func_133560(p, 30);
    }
}
