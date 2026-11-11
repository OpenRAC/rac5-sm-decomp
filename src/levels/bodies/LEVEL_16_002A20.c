/* LEVEL_16:0x002A20 -- runs the per-frame update sequence, sweeping a heading offset until a stop condition. */
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

extern Glob *D_0019ACDC;
extern int D_0019ACE0;
extern float D_0019ACE4;

extern void func_0031F8(int a, int b, float x, float y);
extern void func_003430(int a, int b, float x, float y);
extern void func_0037F8(void);
extern void func_003A18(void);
extern void func_0041D0(void);
extern void func_004710(void);
extern void func_0048C0(void);
extern void func_003C80(void);
extern void func_005D48(void);
extern void func_005AD0(void);
extern int func_006D90(float f);
extern void func_0077C8(void);
extern void func_008E58(void);
extern void func_009F08(void);
extern void func_009190(void);
extern void func_00A2A8(void);
extern void func_00A2E0(void);
extern void func_00A9F0(void);

Glob *func_002A20(void)
{
    int i = 0;
    float base = D_0019ACDC->base;
    float a;
    float t;

    for (;;) {
        t = D_0019ACDC->f0;
        func_0037F8();
        func_003A18();
        func_0041D0();
        func_004710();
        func_0048C0();
        func_003C80();
        func_005D48();
        func_005AD0();
        if (i >= D_0019ACE0) {
            D_0019ACDC->state = 5;
            break;
        }
        if (func_006D90(t)) {
            break;
        }
        a = (base - 3.1415927f) + (1.0f - 2.0f * (float)(i & 1)) * D_0019ACE4 * (float)(i >> 1);
        if (a > 3.1415927f) {
            a -= 6.2831855f;
        } else if (a < -3.1415927f) {
            a += 6.2831855f;
        }
        i++;
        func_0031F8(1000, 3, a, 0.0f);
        func_003430(1000, 3, D_0019ACDC->f1, 0.0f);
    }
    func_0077C8();
    func_008E58();
    func_009F08();
    func_009190();
    func_00A2A8();
    func_00A2E0();
    func_00A9F0();
    return D_0019ACDC;
}
