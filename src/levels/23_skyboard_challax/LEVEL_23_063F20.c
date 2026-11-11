typedef struct {
    char pad[0xF08];
    float fF08;
} S;

void func_0352A0(void *a0);
float func_0013E8(void);

void func_063F20(S *a0)
{
    func_0352A0(a0);
    a0->fF08 = func_0013E8();
}
