void func_02F6D8(char *a0);
void func_003240(int a0, int a1, float f12, float f13);
void func_003270(int a0, int a1, float f12, float f13);
void func_003390(int a0, int a1, float f12, float f13);
void func_0033E0(int a0, int a1, float f12, float f13);
void func_003028(int a0, int a1);
void func_0036B0(float f12, float f13);
void func_003720(int a0);

void func_045E20(char *a0)
{
    func_02F6D8(a0);
    func_003240(0x0A, 0, 5.0f, 1.0f);
    func_003270(0x0A, 0, 0.0f, 1.0f);
    func_003390(0x0A, 0, -0.3f, 1.0f);
    func_0033E0(0x0A, 2, 0.2f, 1.0f);
    func_003028(*(int *)(a0 + 0x59C) + 0x10, 0);
    func_0036B0(0.8f, 0.5f);
    func_003720(0);
}
