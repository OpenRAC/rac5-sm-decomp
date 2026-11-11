/* LEVEL_20:0x0029E0 -- placement copy of LEVEL_16_002A20.c: runs the per-frame update sequence, sweeping a heading offset until a stop condition. */
typedef struct {
    char pad0[0xA0];
    float f0;
    char pad1[0x4];
    float base;
    char pad2[0x1C];
    float f1;
    char pad3[0x1FC];
    int state;
} Glob;

extern Glob *D_000FD3C4;
extern int D_000FD3C8;
extern float D_000FD3CC;

extern void func_0031B8(int a, int b, float x, float y);
extern void func_0033F0(int a, int b, float x, float y);
extern void func_0037B8(void);
extern void func_0039D8(void);
extern void func_004190(void);
extern void func_0046D0(void);
extern void func_004880(void);
extern void func_003C40(void);
extern void func_005D08(void);
extern void func_005A90(void);
extern int func_006D50(float f);
extern void func_007788(void);
extern void func_008E18(void);
extern void func_009EC8(void);
extern void func_009150(void);
extern void func_00A268(void);
extern void func_00A2A0(void);
extern void func_00A9B0(void);

Glob *func_0029E0(void)
{
    int i = 0;
    float base = D_000FD3C4->base;
    float a;
    float t;

    for (;;) {
        t = D_000FD3C4->f0;
        func_0037B8();
        func_0039D8();
        func_004190();
        func_0046D0();
        func_004880();
        func_003C40();
        func_005D08();
        func_005A90();
        if (i >= D_000FD3C8) {
            D_000FD3C4->state = 5;
            break;
        }
        if (func_006D50(t)) {
            break;
        }
        a = (base - 3.1415927f) + (1.0f - 2.0f * (float)(i & 1)) * D_000FD3CC * (float)(i >> 1);
        if (a > 3.1415927f) {
            a -= 6.2831855f;
        } else if (a < -3.1415927f) {
            a += 6.2831855f;
        }
        i++;
        func_0031B8(1000, 3, a, 0.0f);
        func_0033F0(1000, 3, D_000FD3C4->f1, 0.0f);
    }
    func_007788();
    func_008E18();
    func_009EC8();
    func_009150();
    func_00A268();
    func_00A2A0();
    func_00A9B0();
    return D_000FD3C4;
}
