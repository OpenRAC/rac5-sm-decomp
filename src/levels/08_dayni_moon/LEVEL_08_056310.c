/* LEVEL_08:0x056310 -- placement copy of LEVEL_01_050FF8.c: sets up several parameters from a global object's fields. */
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

extern G050FF8 *D_00287F78;
extern void func_040F08(void *obj);
extern void func_003400(float a, float b);
extern void func_003718(int a, int b, float x, float y);
extern void func_003748(int a, int b, float x, float y);
extern void func_003778(int a, float x, float y, int b);
extern void func_0038B8(void *a, void *b, float x, float y);
extern void func_003BB0(float a);
extern void func_003C08(int a);
extern void func_0033D8(int a);
extern void func_003418(int a, int b, int c);

void func_056310(void)
{
    S050FF8 *s = D_00287F78->p54;
    ((void (*)(void))func_040F08)();
    func_003400(0.0f, 0.0f);
    func_003718(10, 0, s->f2C, 0.15f);
    func_003748(10, 0, s->f30, 0.15f);
    func_003778(10, s->f28, 0.15f, 0);
    func_0038B8((void *)10, 0, s->f34, 0.15f);
    func_003BB0(0.0f);
    func_003C08(0);
    func_0033D8(0);
    func_003418(0, 1, 1);
}
