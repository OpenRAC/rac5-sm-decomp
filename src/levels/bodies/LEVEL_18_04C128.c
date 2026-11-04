void func_036608(char *a0);
void func_003350(int a0, int a1, float f12, float f13);
void func_003380(int a0, int a1, float f12, float f13);
void func_0034A0(int a0, int a1, float f12, float f13);
void func_0034F0(int a0, int a1, float f12, float f13);
void func_003138(int a0, int a1);
void func_0037D8(float f12, float f13);
void func_003820(int a0);

void func_04C128(char *a0)
{
    func_036608(a0);
    func_003350(0x0A, 0, 5.0f, 1.0f);
    func_003380(0x0A, 0, 0.0f, 1.0f);
    func_0034A0(0x0A, 0, -0.3f, 1.0f);
    func_0034F0(0x0A, 2, 0.2f, 1.0f);
    func_003138(*(int *)(a0 + 0x59C) + 0x10, 0);
    func_0037D8(0.8f, 0.5f);
    func_003820(0);
}
