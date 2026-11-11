typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_042600(Obj *object, float a, float b);
extern void func_042B60(Obj *object, float a, float b, float c);
extern void func_0428A8(Obj *object, int a, int b, float c, float d, float e);
extern void func_042B70(Obj *object, float a, float b);
extern void func_042348(Obj *object);

void func_043328(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_042600(a0, 0.75f, 0.9f);
    func_042B60(a0, 0.75f, 0.4f, 0.2f);
    func_0428A8(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_042B70(a0, 0.75f, 0.5f);
    func_042348(a0);
}
