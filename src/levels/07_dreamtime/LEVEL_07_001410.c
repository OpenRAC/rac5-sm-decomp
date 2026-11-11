typedef struct {
    char pad[0xF8];
    float v;
} Obj;

extern int D_00203548;
extern float func_07E238(float a);
extern void func_001458(float a);

void f(float x)
{
    ((Obj *)D_00203548)->v = x;
    func_001458(func_07E238(x));
}
