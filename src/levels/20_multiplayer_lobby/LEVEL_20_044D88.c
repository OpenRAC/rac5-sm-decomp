/* LEVEL_20:0x044D88 -- placement copy of LEVEL_01_050FF8.c: sets up several parameters from a global object's fields. */
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

extern G050FF8 *D_00142F48;
extern void func_032060(void *obj);
extern void func_002F88(float a, float b);
extern void func_0032A0(int a, int b, float x, float y);
extern void func_0032D0(int a, int b, float x, float y);
extern void func_003300(int a, float x, float y, int b);
extern void func_003440(void *a, void *b, float x, float y);
extern void func_003718(float a);
extern void func_003748(int a);
extern void func_002F60(int a);
extern void func_002FA0(int a, int b, int c);

void func_044D88(void)
{
    S050FF8 *s = D_00142F48->p54;
    ((void (*)(void))func_032060)();
    func_002F88(0.0f, 0.0f);
    func_0032A0(10, 0, s->f2C, 0.15f);
    func_0032D0(10, 0, s->f30, 0.15f);
    func_003300(10, s->f28, 0.15f, 0);
    func_003440((void *)10, 0, s->f34, 0.15f);
    func_003718(0.0f);
    func_003748(0);
    func_002F60(0);
    func_002FA0(0, 1, 1);
}
