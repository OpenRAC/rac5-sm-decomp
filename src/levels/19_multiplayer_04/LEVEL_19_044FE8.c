typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_043F78(Obj *object, float a, float b);
extern void func_044580(Obj *object, float a, float b, float c);
extern void func_044220(Obj *object, int a, int b, float c, float d, float e);
extern void func_044830(Obj *object, float a, float b);
extern void func_043CC0(Obj *object);

void func_044FE8(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_043F78(a0, 0.75f, 0.9f);
    func_044580(a0, 0.75f, 0.4f, 0.2f);
    func_044220(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_044830(a0, 0.75f, 0.5f);
    func_043CC0(a0);
}
