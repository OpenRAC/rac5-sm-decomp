/* FRONTEND:0x018458 -- placement copy of LEVEL_01_0C8420.c: applies one of two settings depending on the aspect-ratio id, recording the fallback mode otherwise. */
extern int D_0003048C;
extern int D_00030494;
extern void func_0229A0(int *p, int a1);

void func_018458(int *p)
{
    if (D_0003048C == 1) {
        func_0229A0(p, 0x1D);
    } else {
        D_00030494 = 0x12;
        func_0229A0(p, 0x13);
    }
}
