typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_03ECC8(Obj *object, float a, float b);
extern void func_03F228(Obj *object, float a, float b, float c);
extern void func_03EF70(Obj *object, int a, int b, float c, float d, float e);
extern void func_03F238(Obj *object, float a, float b);
extern void func_03EA10(Obj *object);

void func_03F9F0(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_03ECC8(a0, 0.75f, 0.9f);
    func_03F228(a0, 0.75f, 0.4f, 0.2f);
    func_03EF70(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_03F238(a0, 0.75f, 0.5f);
    func_03EA10(a0);
}
