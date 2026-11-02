typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_03EE08(Obj *object, float a, float b);
extern void func_03F410(Obj *object, float a, float b, float c);
extern void func_03F0B0(Obj *object, int a, int b, float c, float d, float e);
extern void func_03F6C0(Obj *object, float a, float b);
extern void func_03EB50(Obj *object);

void func_03FE78(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_03EE08(a0, 0.75f, 0.9f);
    func_03F410(a0, 0.75f, 0.4f, 0.2f);
    func_03F0B0(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_03F6C0(a0, 0.75f, 0.5f);
    func_03EB50(a0);
}
