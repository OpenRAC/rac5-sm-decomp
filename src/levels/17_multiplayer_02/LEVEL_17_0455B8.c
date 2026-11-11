typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_044548(Obj *object, float a, float b);
extern void func_044B50(Obj *object, float a, float b, float c);
extern void func_0447F0(Obj *object, int a, int b, float c, float d, float e);
extern void func_044E00(Obj *object, float a, float b);
extern void func_044290(Obj *object);

void func_0455B8(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_044548(a0, 0.75f, 0.9f);
    func_044B50(a0, 0.75f, 0.4f, 0.2f);
    func_0447F0(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_044E00(a0, 0.75f, 0.5f);
    func_044290(a0);
}
