void func_03A0C0(char *a0);
void func_003720(int a0, int a1, float f12, float f13);
void func_003750(int a0, int a1, float f12, float f13);
void func_003870(int a0, int a1, float f12, float f13);
void func_0038C0(int a0, int a1, float f12, float f13);
void func_003508(int a0, int a1);
void func_003B90(float f12, float f13);
void func_003C00(int a0);

void func_053000(char *a0)
{
    func_03A0C0(a0);
    func_003720(0x0A, 0, 5.0f, 1.0f);
    func_003750(0x0A, 0, 0.0f, 1.0f);
    func_003870(0x0A, 0, -0.3f, 1.0f);
    func_0038C0(0x0A, 2, 0.2f, 1.0f);
    func_003508(*(int *)(a0 + 0x59C) + 0x10, 0);
    func_003B90(0.8f, 0.5f);
    func_003C00(0);
}
