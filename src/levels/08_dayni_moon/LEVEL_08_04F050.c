typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_04E328(Obj *object, float a, float b);
extern void func_04E888(Obj *object, float a, float b, float c);
extern void func_04E5D0(Obj *object, int a, int b, float c, float d, float e);
extern void func_04E898(Obj *object, float a, float b);
extern void func_04E070(Obj *object);

void func_04F050(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_04E328(a0, 0.75f, 0.9f);
    func_04E888(a0, 0.75f, 0.4f, 0.2f);
    func_04E5D0(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_04E898(a0, 0.75f, 0.5f);
    func_04E070(a0);
}
