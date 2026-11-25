/* LEVEL_17:0x04B190 -- placement copy of LEVEL_01_050FF8.c: sets up several parameters from a global object's fields. */
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

extern G050FF8 *D_001DC918;
extern void func_037618(void *obj);
extern void func_002FC8(float a, float b);
extern void func_0032E0(int a, int b, float x, float y);
extern void func_003310(int a, int b, float x, float y);
extern void func_003340(int a, float x, float y, int b);
extern void func_003480(void *a, void *b, float x, float y);
extern void func_003758(float a);
extern void func_003788(int a);
extern void func_002FA0(int a);
extern void func_002FE0(int a, int b, int c);

void func_04B190(void)
{
    S050FF8 *s = D_001DC918->p54;
    ((void (*)(void))func_037618)();
    func_002FC8(0.0f, 0.0f);
    func_0032E0(10, 0, s->f2C, 0.15f);
    func_003310(10, 0, s->f30, 0.15f);
    func_003340(10, s->f28, 0.15f, 0);
    func_003480((void *)10, 0, s->f34, 0.15f);
    func_003758(0.0f);
    func_003788(0);
    func_002FA0(0);
    func_002FE0(0, 1, 1);
}
