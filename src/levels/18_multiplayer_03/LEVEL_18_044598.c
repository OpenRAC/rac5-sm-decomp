typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_043528(Obj *object, float a, float b);
extern void func_043B30(Obj *object, float a, float b, float c);
extern void func_0437D0(Obj *object, int a, int b, float c, float d, float e);
extern void func_043DE0(Obj *object, float a, float b);
extern void func_043270(Obj *object);

void func_044598(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_043528(a0, 0.75f, 0.9f);
    func_043B30(a0, 0.75f, 0.4f, 0.2f);
    func_0437D0(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_043DE0(a0, 0.75f, 0.5f);
    func_043270(a0);
}
