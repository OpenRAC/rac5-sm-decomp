typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_0474E0(Obj *object, float a, float b);
extern void func_047A40(Obj *object, float a, float b, float c);
extern void func_047788(Obj *object, int a, int b, float c, float d, float e);
extern void func_047A50(Obj *object, float a, float b);
extern void func_047228(Obj *object);

void func_048208(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_0474E0(a0, 0.75f, 0.9f);
    func_047A40(a0, 0.75f, 0.4f, 0.2f);
    func_047788(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_047A50(a0, 0.75f, 0.5f);
    func_047228(a0);
}
