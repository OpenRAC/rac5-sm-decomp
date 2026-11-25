/* LEVEL_21:0x042288 -- placement copy of LEVEL_01_050FF8.c: sets up several parameters from a global object's fields. */
typedef struct {
    char pad0[0x28];
    float f28;
    float f2C;
    float f30;
    float f34;
} S050FF8;

typedef struct {
    char pad0[0x54];
    S050FF8 *p54;
} G050FF8;

extern G050FF8 *D_00180E18;
extern void func_02F6D8(void *obj);
extern void func_002F28(float a, float b);
extern void func_003240(int a, int b, float x, float y);
extern void func_003270(int a, int b, float x, float y);
extern void func_0032A0(int a, float x, float y, int b);
extern void func_0033E0(void *a, void *b, float x, float y);
extern void func_0036A0(float a);
extern void func_0036F8(int a);
extern void func_002F00(int a);
extern void func_002F40(int a, int b, int c);

void func_042288(void)
{
    S050FF8 *s = D_00180E18->p54;
    ((void (*)(void))func_02F6D8)();
    func_002F28(0.0f, 0.0f);
    func_003240(10, 0, s->f2C, 0.15f);
    func_003270(10, 0, s->f30, 0.15f);
    func_0032A0(10, s->f28, 0.15f, 0);
    func_0033E0((void *)10, 0, s->f34, 0.15f);
    func_0036A0(0.0f);
    func_0036F8(0);
    func_002F00(0);
    func_002F40(0, 1, 1);
}
