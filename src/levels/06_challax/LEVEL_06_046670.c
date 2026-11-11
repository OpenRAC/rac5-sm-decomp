typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_045948(Obj *object, float a, float b);
extern void func_045EA8(Obj *object, float a, float b, float c);
extern void func_045BF0(Obj *object, int a, int b, float c, float d, float e);
extern void func_045EB8(Obj *object, float a, float b);
extern void func_045690(Obj *object);

void func_046670(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_045948(a0, 0.75f, 0.9f);
    func_045EA8(a0, 0.75f, 0.4f, 0.2f);
    func_045BF0(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_045EB8(a0, 0.75f, 0.5f);
    func_045690(a0);
}
