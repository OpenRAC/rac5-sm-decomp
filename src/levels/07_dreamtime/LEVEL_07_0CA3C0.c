/* LEVEL_07:0x0CA3C0 -- placement copy of LEVEL_01_0C8360.c: applies one of two settings to a value depending on the aspect-ratio id, remembering the second choice in a global. */
extern int D_00214F0C;
extern int D_00214F14;
extern void func_1386E0(int *p, int a1);

void func_0CA3C0(int *p)
{
    if (D_00214F0C == 1) {
        func_1386E0(p, 0x1D);
    } else {
        D_00214F14 = 0x11;
        func_1386E0(p, 0x13);
    }
}
