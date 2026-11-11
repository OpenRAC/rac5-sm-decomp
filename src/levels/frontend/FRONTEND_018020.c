/* FRONTEND:0x018020 -- picks the menu transition by the global mode: mode 1 runs transition 0xC; otherwise it raises one of two flags (word 0x1D with 0x13, or the byte flag with 0x20) before running the transition helper. */
extern int D_0003048C;
extern unsigned char D_00030438;
extern unsigned char D_000304B1;
extern int D_00030494;
extern void func_0229A0(int *p, int a1);

void func_018020(int *p)
{
    if (D_0003048C == 1) {
        func_0229A0(p, 0xC);
    } else if (D_00030438 != 0) {
        D_00030494 = 0x1D;
        func_0229A0(p, 0x13);
    } else {
        D_000304B1 = 1;
        func_0229A0(p, 0x20);
    }
}
