typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_044CE8(Obj *object, float a, float b);
extern void func_0452F0(Obj *object, float a, float b, float c);
extern void func_044F90(Obj *object, int a, int b, float c, float d, float e);
extern void func_0455A0(Obj *object, float a, float b);
extern void func_044A30(Obj *object);

void func_045D58(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_044CE8(a0, 0.75f, 0.9f);
    func_0452F0(a0, 0.75f, 0.4f, 0.2f);
    func_044F90(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_0455A0(a0, 0.75f, 0.5f);
    func_044A30(a0);
}
