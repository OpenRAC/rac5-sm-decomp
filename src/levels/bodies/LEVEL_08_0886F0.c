typedef struct {
    char pad[0xC];
    float v;
} Obj;

extern void func_088720(void);

void f(Obj *a0, Obj *a1)
{
    func_088720();
    a1->v = 1.0f;
}
