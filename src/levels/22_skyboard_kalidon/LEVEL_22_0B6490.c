/* LEVEL_22:0x0B6490 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_0015FF8C;
extern unsigned char D_0015FF30;
extern int D_0015FF94;
extern void func_10CBB0(int *p, int a1);

void func_0B6490(int *p)
{
    if (D_0015FF8C == 1) {
        func_10CBB0(p, 12);
    } else if (D_0015FF30 != 0) {
        D_0015FF94 = 29;
        func_10CBB0(p, 19);
    } else {
        func_10CBB0(p, 30);
    }
}
