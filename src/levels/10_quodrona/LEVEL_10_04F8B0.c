/* LEVEL_10:0x04F8B0 -- placement copy of LEVEL_01_050FF8.c: sets up several parameters from a global object's fields. */
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

extern G050FF8 *D_002420E8;
extern void func_03A4E8(void *obj);
extern void func_003180(float a, float b);
extern void func_003498(int a, int b, float x, float y);
extern void func_0034C8(int a, int b, float x, float y);
extern void func_0034F8(int a, float x, float y, int b);
extern void func_003638(void *a, void *b, float x, float y);
extern void func_003908(float a);
extern void func_003960(int a);
extern void func_003158(int a);
extern void func_003198(int a, int b, int c);

void func_04F8B0(void)
{
    S050FF8 *s = D_002420E8->p54;
    ((void (*)(void))func_03A4E8)();
    func_003180(0.0f, 0.0f);
    func_003498(10, 0, s->f2C, 0.15f);
    func_0034C8(10, 0, s->f30, 0.15f);
    func_0034F8(10, s->f28, 0.15f, 0);
    func_003638((void *)10, 0, s->f34, 0.15f);
    func_003908(0.0f);
    func_003960(0);
    func_003158(0);
    func_003198(0, 1, 1);
}
