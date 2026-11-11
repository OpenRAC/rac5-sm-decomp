void func_03BE20(char *a0);
void func_0036E8(int a0, int a1, float f12, float f13);
void func_003718(int a0, int a1, float f12, float f13);
void func_003838(int a0, int a1, float f12, float f13);
void func_003888(int a0, int a1, float f12, float f13);
void func_0034D0(int a0, int a1);
void func_003B58(float f12, float f13);
void func_003BC8(int a0);

void func_054B90(char *a0)
{
    func_03BE20(a0);
    func_0036E8(0x0A, 0, 5.0f, 1.0f);
    func_003718(0x0A, 0, 0.0f, 1.0f);
    func_003838(0x0A, 0, -0.3f, 1.0f);
    func_003888(0x0A, 2, 0.2f, 1.0f);
    func_0034D0(*(int *)(a0 + 0x59C) + 0x10, 0);
    func_003B58(0.8f, 0.5f);
    func_003BC8(0);
}
