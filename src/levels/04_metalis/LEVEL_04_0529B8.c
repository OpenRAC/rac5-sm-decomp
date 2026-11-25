/* LEVEL_04:0x0529B8 -- placement copy of LEVEL_01_050FF8.c: sets up several parameters from a global object's fields. */
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

extern G050FF8 *D_002534F8;
extern void func_03D800(void *obj);
extern void func_0031D8(float a, float b);
extern void func_0034F0(int a, int b, float x, float y);
extern void func_003520(int a, int b, float x, float y);
extern void func_003550(int a, float x, float y, int b);
extern void func_003690(void *a, void *b, float x, float y);
extern void func_003978(float a);
extern void func_0039D0(int a);
extern void func_0031B0(int a);
extern void func_0031F0(int a, int b, int c);

void func_0529B8(void)
{
    S050FF8 *s = D_002534F8->p54;
    ((void (*)(void))func_03D800)();
    func_0031D8(0.0f, 0.0f);
    func_0034F0(10, 0, s->f2C, 0.15f);
    func_003520(10, 0, s->f30, 0.15f);
    func_003550(10, s->f28, 0.15f, 0);
    func_003690((void *)10, 0, s->f34, 0.15f);
    func_003978(0.0f);
    func_0039D0(0);
    func_0031B0(0);
    func_0031F0(0, 1, 1);
}
