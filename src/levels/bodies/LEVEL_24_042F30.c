typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_042208(Obj *object, float a, float b);
extern void func_042768(Obj *object, float a, float b, float c);
extern void func_0424B0(Obj *object, int a, int b, float c, float d, float e);
extern void func_042778(Obj *object, float a, float b);
extern void func_041F50(Obj *object);

void func_042F30(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_042208(a0, 0.75f, 0.9f);
    func_042768(a0, 0.75f, 0.4f, 0.2f);
    func_0424B0(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_042778(a0, 0.75f, 0.5f);
    func_041F50(a0);
}
