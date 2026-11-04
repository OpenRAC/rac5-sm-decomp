void func_032060(char *a0);
void func_0032A0(int a0, int a1, float f12, float f13);
void func_0032D0(int a0, int a1, float f12, float f13);
void func_0033F0(int a0, int a1, float f12, float f13);
void func_003440(int a0, int a1, float f12, float f13);
void func_003088(int a0, int a1);
void func_003728(float f12, float f13);
void func_003770(int a0);

void func_046C48(char *a0)
{
    func_032060(a0);
    func_0032A0(0x0A, 0, 5.0f, 1.0f);
    func_0032D0(0x0A, 0, 0.0f, 1.0f);
    func_0033F0(0x0A, 0, -0.3f, 1.0f);
    func_003440(0x0A, 2, 0.2f, 1.0f);
    func_003088(*(int *)(a0 + 0x59C) + 0x10, 0);
    func_003728(0.8f, 0.5f);
    func_003770(0);
}
