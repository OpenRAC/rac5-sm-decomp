/* LEVEL_05:0x0C6588 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_001EFF8C;
extern unsigned char D_001EFF30;
extern int D_001EFF94;
extern void func_131058(int *p, int a1);

void func_0C6588(int *p)
{
    if (D_001EFF8C == 1) {
        func_131058(p, 12);
    } else if (D_001EFF30 != 0) {
        D_001EFF94 = 29;
        func_131058(p, 19);
    } else {
        func_131058(p, 30);
    }
}
