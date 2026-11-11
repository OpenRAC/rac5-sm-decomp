/* LEVEL_20:0x0A1180 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_00111364;
extern unsigned char D_00111308;
extern int D_0011136C;
extern void func_0E4B98(int *p, int a1);

void func_0A1180(int *p)
{
    if (D_00111364 == 1) {
        func_0E4B98(p, 12);
    } else if (D_00111308 != 0) {
        D_0011136C = 29;
        func_0E4B98(p, 19);
    } else {
        func_0E4B98(p, 30);
    }
}
