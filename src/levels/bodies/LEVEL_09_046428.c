typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_045700(Obj *object, float a, float b);
extern void func_045C60(Obj *object, float a, float b, float c);
extern void func_0459A8(Obj *object, int a, int b, float c, float d, float e);
extern void func_045C70(Obj *object, float a, float b);
extern void func_045448(Obj *object);

void func_046428(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_045700(a0, 0.75f, 0.9f);
    func_045C60(a0, 0.75f, 0.4f, 0.2f);
    func_0459A8(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_045C70(a0, 0.75f, 0.5f);
    func_045448(a0);
}
