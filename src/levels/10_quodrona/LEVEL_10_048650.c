typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_047928(Obj *object, float a, float b);
extern void func_047E88(Obj *object, float a, float b, float c);
extern void func_047BD0(Obj *object, int a, int b, float c, float d, float e);
extern void func_047E98(Obj *object, float a, float b);
extern void func_047670(Obj *object);

void func_048650(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_047928(a0, 0.75f, 0.9f);
    func_047E88(a0, 0.75f, 0.4f, 0.2f);
    func_047BD0(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_047E98(a0, 0.75f, 0.5f);
    func_047670(a0);
}
