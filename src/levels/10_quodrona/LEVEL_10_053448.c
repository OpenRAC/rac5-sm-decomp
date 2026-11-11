void func_03A4E8(char *a0);
void func_003498(int a0, int a1, float f12, float f13);
void func_0034C8(int a0, int a1, float f12, float f13);
void func_0035E8(int a0, int a1, float f12, float f13);
void func_003638(int a0, int a1, float f12, float f13);
void func_003280(int a0, int a1);
void func_003918(float f12, float f13);
void func_003988(int a0);

void func_053448(char *a0)
{
    func_03A4E8(a0);
    func_003498(0x0A, 0, 5.0f, 1.0f);
    func_0034C8(0x0A, 0, 0.0f, 1.0f);
    func_0035E8(0x0A, 0, -0.3f, 1.0f);
    func_003638(0x0A, 2, 0.2f, 1.0f);
    func_003280(*(int *)(a0 + 0x59C) + 0x10, 0);
    func_003918(0.8f, 0.5f);
    func_003988(0);
}
