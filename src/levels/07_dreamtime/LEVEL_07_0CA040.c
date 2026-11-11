/* LEVEL_07:0x0CA040 -- placement copy of LEVEL_01_0C7FE0.c: picks the handler entry from the global mode and the flag byte, noting entry 29 in a global when the flag is set. */
extern int D_00214F0C;
extern unsigned char D_00214EB0;
extern int D_00214F14;
extern void func_1386E0(int *p, int a1);

void func_0CA040(int *p)
{
    if (D_00214F0C == 1) {
        func_1386E0(p, 12);
    } else if (D_00214EB0 != 0) {
        D_00214F14 = 29;
        func_1386E0(p, 19);
    } else {
        func_1386E0(p, 30);
    }
}
