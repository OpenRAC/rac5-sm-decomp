void func_040F08(char *a0);
void func_003718(int a0, int a1, float f12, float f13);
void func_003748(int a0, int a1, float f12, float f13);
void func_003868(int a0, int a1, float f12, float f13);
void func_0038B8(int a0, int a1, float f12, float f13);
void func_003500(int a0, int a1);
void func_003BC0(float f12, float f13);
void func_003C30(int a0);

void func_059EA8(char *a0)
{
    func_040F08(a0);
    func_003718(0x0A, 0, 5.0f, 1.0f);
    func_003748(0x0A, 0, 0.0f, 1.0f);
    func_003868(0x0A, 0, -0.3f, 1.0f);
    func_0038B8(0x0A, 2, 0.2f, 1.0f);
    func_003500(*(int *)(a0 + 0x59C) + 0x10, 0);
    func_003BC0(0.8f, 0.5f);
    func_003C30(0);
}
