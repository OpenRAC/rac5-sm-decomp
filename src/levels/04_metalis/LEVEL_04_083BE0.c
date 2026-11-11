typedef struct {
    char pad[0xC];
    float v;
} Obj;

extern void func_083C10(void);

void f(Obj *a0, Obj *a1)
{
    func_083C10();
    a1->v = 1.0f;
}
