/* LEVEL_23:0x04A320 -- placement copy of LEVEL_01_050FF8.c: sets up several parameters from a global object's fields. */
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

extern G050FF8 *D_00206168;
extern void func_0352A0(void *obj);
extern void func_0033D0(float a, float b);
extern void func_0036F8(int a, int b, float x, float y);
extern void func_003728(int a, int b, float x, float y);
extern void func_003758(int a, float x, float y, int b);
extern void func_003898(void *a, void *b, float x, float y);
extern void func_003B58(float a);
extern void func_003BB0(int a);
extern void func_0033A8(int a);
extern void func_0033E8(int a, int b, int c);

void func_04A320(void)
{
    S050FF8 *s = D_00206168->p54;
    ((void (*)(void))func_0352A0)();
    func_0033D0(0.0f, 0.0f);
    func_0036F8(10, 0, s->f2C, 0.15f);
    func_003728(10, 0, s->f30, 0.15f);
    func_003758(10, s->f28, 0.15f, 0);
    func_003898((void *)10, 0, s->f34, 0.15f);
    func_003B58(0.0f);
    func_003BB0(0);
    func_0033A8(0);
    func_0033E8(0, 1, 1);
}
