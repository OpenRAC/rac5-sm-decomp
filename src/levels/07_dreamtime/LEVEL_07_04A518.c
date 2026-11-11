typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_0497F0(Obj *object, float a, float b);
extern void func_049D50(Obj *object, float a, float b, float c);
extern void func_049A98(Obj *object, int a, int b, float c, float d, float e);
extern void func_049D60(Obj *object, float a, float b);
extern void func_049538(Obj *object);

void func_04A518(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_0497F0(a0, 0.75f, 0.9f);
    func_049D50(a0, 0.75f, 0.4f, 0.2f);
    func_049A98(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_049D60(a0, 0.75f, 0.5f);
    func_049538(a0);
}
