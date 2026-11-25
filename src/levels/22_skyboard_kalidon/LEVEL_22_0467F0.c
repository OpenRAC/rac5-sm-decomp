/* LEVEL_22:0x0467F0 -- placement copy of LEVEL_01_050FF8.c: sets up several parameters from a global object's fields. */
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

extern G050FF8 *D_0018A8E8;
extern void func_0319C0(void *obj);
extern void func_003140(float a, float b);
extern void func_003468(int a, int b, float x, float y);
extern void func_003498(int a, int b, float x, float y);
extern void func_0034C8(int a, float x, float y, int b);
extern void func_003608(void *a, void *b, float x, float y);
extern void func_0038C8(float a);
extern void func_003920(int a);
extern void func_003118(int a);
extern void func_003158(int a, int b, int c);

void func_0467F0(void)
{
    S050FF8 *s = D_0018A8E8->p54;
    ((void (*)(void))func_0319C0)();
    func_003140(0.0f, 0.0f);
    func_003468(10, 0, s->f2C, 0.15f);
    func_003498(10, 0, s->f30, 0.15f);
    func_0034C8(10, s->f28, 0.15f, 0);
    func_003608((void *)10, 0, s->f34, 0.15f);
    func_0038C8(0.0f);
    func_003920(0);
    func_003118(0);
    func_003158(0, 1, 1);
}
