typedef struct {
    char pad[0xF08];
    float v;
} Obj;

extern void func_0319C0(void);
extern float func_001158(void);

void f(Obj *a0)
{
    func_0319C0();
    a0->v = func_001158();
}
