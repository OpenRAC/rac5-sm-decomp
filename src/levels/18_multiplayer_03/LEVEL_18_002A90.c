/* LEVEL_18:0x002A90 -- placement copy of LEVEL_16_002A20.c: runs the per-frame update sequence, sweeping a heading offset until a stop condition. */
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

extern Glob *D_0019C15C;
extern int D_0019C160;
extern float D_0019C164;

extern void func_003268(int a, int b, float x, float y);
extern void func_0034A0(int a, int b, float x, float y);
extern void func_003868(void);
extern void func_003A88(void);
extern void func_004240(void);
extern void func_004780(void);
extern void func_004930(void);
extern void func_003CF0(void);
extern void func_005DB8(void);
extern void func_005B40(void);
extern int func_006E00(float f);
extern void func_007838(void);
extern void func_008EC8(void);
extern void func_009F78(void);
extern void func_009200(void);
extern void func_00A318(void);
extern void func_00A350(void);
extern void func_00AA60(void);

Glob *func_002A90(void)
{
    int i = 0;
    float base = D_0019C15C->base;
    float a;
    float t;

    for (;;) {
        t = D_0019C15C->f0;
        func_003868();
        func_003A88();
        func_004240();
        func_004780();
        func_004930();
        func_003CF0();
        func_005DB8();
        func_005B40();
        if (i >= D_0019C160) {
            D_0019C15C->state = 5;
            break;
        }
        if (func_006E00(t)) {
            break;
        }
        a = (base - 3.1415927f) + (1.0f - 2.0f * (float)(i & 1)) * D_0019C164 * (float)(i >> 1);
        if (a > 3.1415927f) {
            a -= 6.2831855f;
        } else if (a < -3.1415927f) {
            a += 6.2831855f;
        }
        i++;
        func_003268(1000, 3, a, 0.0f);
        func_0034A0(1000, 3, D_0019C15C->f1, 0.0f);
    }
    func_007838();
    func_008EC8();
    func_009F78();
    func_009200();
    func_00A318();
    func_00A350();
    func_00AA60();
    return D_0019C15C;
}
