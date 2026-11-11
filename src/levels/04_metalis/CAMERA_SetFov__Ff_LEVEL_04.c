typedef struct {
    char pad[0xF8];
    float v;
} Obj;

extern int D_002083C8;
extern float func_07F530(float a);
extern void func_001260(float a);

void CAMERA_SetFov__Ff(float x)
{
    ((Obj *)D_002083C8)->v = x;
    func_001260(func_07F530(x));
}
