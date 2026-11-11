/* LEVEL_15:0x0A8628 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_0015588C;
extern unsigned char D_00155830;
extern int D_00155894;
extern void func_0F45A8(int *p, int a1);

void func_0A8628(int *p)
{
    if (D_0015588C == 1) {
        func_0F45A8(p, 12);
    } else if (D_00155830 != 0) {
        D_00155894 = 29;
        func_0F45A8(p, 19);
    } else {
        func_0F45A8(p, 30);
    }
}
