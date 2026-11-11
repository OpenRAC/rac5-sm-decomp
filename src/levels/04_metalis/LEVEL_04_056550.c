void func_03D800(char *a0);
void func_0034F0(int a0, int a1, float f12, float f13);
void func_003520(int a0, int a1, float f12, float f13);
void func_003640(int a0, int a1, float f12, float f13);
void func_003690(int a0, int a1, float f12, float f13);
void func_0032D8(int a0, int a1);
void func_003988(float f12, float f13);
void func_0039F8(int a0);

void func_056550(char *a0)
{
    func_03D800(a0);
    func_0034F0(0x0A, 0, 5.0f, 1.0f);
    func_003520(0x0A, 0, 0.0f, 1.0f);
    func_003640(0x0A, 0, -0.3f, 1.0f);
    func_003690(0x0A, 2, 0.2f, 1.0f);
    func_0032D8(*(int *)(a0 + 0x59C) + 0x10, 0);
    func_003988(0.8f, 0.5f);
    func_0039F8(0);
}
