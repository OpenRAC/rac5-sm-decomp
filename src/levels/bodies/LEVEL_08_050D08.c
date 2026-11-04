void func_01AB30(char *a0);
void func_01AB70(char *a0);
void func_01AC00(char *a0, float f12);
void func_01AC30(int a0);
void func_01AC40(float f12);
void func_01AC50(int a0);

void func_050D08(char *a0)
{
    func_01AB30(a0 + 0x30);
    func_01AB70(a0);
    func_01AC00(a0 + 0x200, *(float *)(a0 + 0x270));
    func_01AC30(1);
    func_01AC40(0.5f);
    func_01AC50(*(int *)(a0 + 0x59C));
}
