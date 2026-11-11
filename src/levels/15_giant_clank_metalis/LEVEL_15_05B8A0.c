typedef struct {
    char pad[0xF08];
    float fF08;
} Obj;

void func_0002F6D8(Obj *a0);
float func_00000F40(void);

void func_05B8A0(Obj *a0)
{
    func_0002F6D8(a0);
    a0->fF08 = func_00000F40();
}
