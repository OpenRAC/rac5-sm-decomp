/* FRONTEND:0x017CC8 -- placement copy of LEVEL_01_0C7CA8.c: applies one of two settings to a value depending on the aspect-ratio id. */
extern int D_0003048C;
extern void func_0229A0(int *p, int a1);

void func_017CC8(int *p)
{
    if (D_0003048C == 1) {
        func_0229A0(p, 0x1D);
    } else {
        func_0229A0(p, 0x1F);
    }
}
