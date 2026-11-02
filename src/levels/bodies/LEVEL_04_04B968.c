typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_04AC40(Obj *object, float a, float b);
extern void func_04B1A0(Obj *object, float a, float b, float c);
extern void func_04AEE8(Obj *object, int a, int b, float c, float d, float e);
extern void func_04B1B0(Obj *object, float a, float b);
extern void func_04A988(Obj *object);

void func_04B968(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_04AC40(a0, 0.75f, 0.9f);
    func_04B1A0(a0, 0.75f, 0.4f, 0.2f);
    func_04AEE8(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_04B1B0(a0, 0.75f, 0.5f);
    func_04A988(a0);
}
