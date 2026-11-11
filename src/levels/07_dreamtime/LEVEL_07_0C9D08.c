/* LEVEL_07:0x0C9D08 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_00214F0C;
extern void func_1386E0(int *p, int a1);

void func_0C9D08(int *p)
{
    if (D_00214F0C == 1) {
        func_1386E0(p, 0x1D);
    } else {
        func_1386E0(p, 0x1F);
    }
}
