typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_049220(Obj *object, float a, float b);
extern void func_049780(Obj *object, float a, float b, float c);
extern void func_0494C8(Obj *object, int a, int b, float c, float d, float e);
extern void func_049790(Obj *object, float a, float b);
extern void func_048F68(Obj *object);

void func_049F48(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_049220(a0, 0.75f, 0.9f);
    func_049780(a0, 0.75f, 0.4f, 0.2f);
    func_0494C8(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_049790(a0, 0.75f, 0.5f);
    func_048F68(a0);
}
