/* LEVEL_03:0x04F468 -- placement copy of LEVEL_01_050FF8.c: sets up several parameters from a global object's fields. */
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

extern G050FF8 *D_00253B68;
extern void func_03A0C0(void *obj);
extern void func_0033F8(float a, float b);
extern void func_003720(int a, int b, float x, float y);
extern void func_003750(int a, int b, float x, float y);
extern void func_003780(int a, float x, float y, int b);
extern void func_0038C0(void *a, void *b, float x, float y);
extern void func_003B80(float a);
extern void func_003BD8(int a);
extern void func_0033D0(int a);
extern void func_003410(int a, int b, int c);

void func_04F468(void)
{
    S050FF8 *s = D_00253B68->p54;
    ((void (*)(void))func_03A0C0)();
    func_0033F8(0.0f, 0.0f);
    func_003720(10, 0, s->f2C, 0.15f);
    func_003750(10, 0, s->f30, 0.15f);
    func_003780(10, s->f28, 0.15f, 0);
    func_0038C0((void *)10, 0, s->f34, 0.15f);
    func_003B80(0.0f);
    func_003BD8(0);
    func_0033D0(0);
    func_003410(0, 1, 1);
}
