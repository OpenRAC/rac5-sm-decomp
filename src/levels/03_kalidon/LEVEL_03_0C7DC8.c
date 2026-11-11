/* LEVEL_03:0x0C7DC8 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_0021928C;
extern unsigned char D_00219230;
extern int D_00219294;
extern void func_133AA8(int *p, int a1);

void func_0C7DC8(int *p)
{
    if (D_0021928C == 1) {
        func_133AA8(p, 12);
    } else if (D_00219230 != 0) {
        D_00219294 = 29;
        func_133AA8(p, 19);
    } else {
        func_133AA8(p, 30);
    }
}
