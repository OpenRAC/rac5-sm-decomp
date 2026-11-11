void func_019E18(char *a0);
void func_019E58(char *a0);
void func_019EE8(char *a0, float f12);
void func_019F18(int a0);
void func_019F28(float f12);
void func_019F38(int a0);

void func_04D620(char *a0)
{
    func_019E18(a0 + 0x30);
    func_019E58(a0);
    func_019EE8(a0 + 0x200, *(float *)(a0 + 0x270));
    func_019F18(1);
    func_019F28(0.5f);
    func_019F38(*(int *)(a0 + 0x59C));
}
