typedef struct {
    unsigned char pad0[0x100];
    short mode_100;
} Obj;

extern void func_046E20(Obj *object, float a, float b);
extern void func_047380(Obj *object, float a, float b, float c);
extern void func_0470C8(Obj *object, int a, int b, float c, float d, float e);
extern void func_047390(Obj *object, float a, float b);
extern void func_046B68(Obj *object);

void func_047B48(Obj *a0)
{
    if (a0->mode_100 != 1)
        func_046E20(a0, 0.75f, 0.9f);
    func_047380(a0, 0.75f, 0.4f, 0.2f);
    func_0470C8(a0, 0x68, 0, 0.75f, 0.4f, 0.2f);
    func_047390(a0, 0.75f, 0.5f);
    func_046B68(a0);
}
