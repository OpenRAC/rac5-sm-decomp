/* LEVEL_24:0x0C18A8 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_001D188C;
extern unsigned char D_001D1830;
extern int D_001D1894;
extern void func_12B1E0(int *p, int a1);

void func_0C18A8(int *p)
{
    if (D_001D188C == 1) {
        func_12B1E0(p, 12);
    } else if (D_001D1830 != 0) {
        D_001D1894 = 29;
        func_12B1E0(p, 19);
    } else {
        func_12B1E0(p, 30);
    }
}
