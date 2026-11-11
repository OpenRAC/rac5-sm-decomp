/* LEVEL_23:0x0BED80 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_001D400C;
extern unsigned char D_001D3FB0;
extern int D_001D4014;
extern void func_126E58(int *p, int a1);

void func_0BED80(int *p)
{
    if (D_001D400C == 1) {
        func_126E58(p, 12);
    } else if (D_001D3FB0 != 0) {
        D_001D4014 = 29;
        func_126E58(p, 19);
    } else {
        func_126E58(p, 30);
    }
}
