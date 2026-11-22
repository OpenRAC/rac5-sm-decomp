/* FRONTEND:0x00BAD0 -- loads a projection matrix shifted by an offset pair, then resets state. Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LEVEL_01_0A8E80.c (LEVEL_01_0A8E80). */
extern void func_006120(int mode);
extern void func_0062A0(void *m);
extern void func_006200(float *m);
extern void func_006320(void);
extern void func_006FA8(void);
extern int g_AspectRatioID;
extern float D_00030110[2];
extern float *D_00030118;
extern unsigned char D_00030108;
extern float *D_00030100;
extern float *D_00030104;
extern float D_00030040[16];
extern float D_00030080[16];
extern float D_000300C0[16];
extern float D_00030000[16];
extern float D_0012D1C0[16];
extern int D_0002FDEC;
extern int D_0002FDE8;
extern int D_0002FE14;

#define FP(p, off) (*(float *)((char *)(p) + (off)))

void func_00BAD0(int mode, float *offs)
{
    float b, a;

    D_00030118 = offs ? offs : D_00030110;
    func_006120(5);
    if (D_00030108 == 0) {
        func_0062A0(D_0012D1C0);
        D_00030108 = 1;
    }
    if (mode == 3) {
        D_00030100 = D_00030080;
        D_00030104 = D_000300C0;
    } else {
        D_00030100 = D_00030040;
        D_00030104 = D_00030000;
    }
    if (g_AspectRatioID == 0) {
        a = FP(D_00030100, 0x30);
        b = FP(D_00030100, 0x34);
        FP(D_00030100, 0x30) = a + D_00030118[0];
        FP(D_00030100, 0x34) += D_00030118[1];
        func_006200(D_00030100);
        FP(D_00030100, 0x30) = a;
        FP(D_00030100, 0x34) = b;
    } else {
        a = FP(D_00030104, 0x30);
        b = FP(D_00030104, 0x34);
        FP(D_00030104, 0x30) = a + D_00030118[0];
        FP(D_00030104, 0x34) += D_00030118[1];
        func_006200(D_00030104);
        FP(D_00030104, 0x30) = a;
        FP(D_00030104, 0x34) = b;
    }
    func_006320();
    func_006FA8();
    D_0002FDEC = 0;
    D_0002FDE8 = 0;
    D_0002FE14 = 0;
}
