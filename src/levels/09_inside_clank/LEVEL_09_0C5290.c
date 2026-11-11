/* LEVEL_09:0x0C5290 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_001EAA0C;
extern unsigned char D_001EA9B0;
extern int D_001EAA14;
extern void func_12E678(int *p, int a1);

void func_0C5290(int *p)
{
    if (D_001EAA0C == 1) {
        func_12E678(p, 12);
    } else if (D_001EA9B0 != 0) {
        D_001EAA14 = 29;
        func_12E678(p, 19);
    } else {
        func_12E678(p, 30);
    }
}
