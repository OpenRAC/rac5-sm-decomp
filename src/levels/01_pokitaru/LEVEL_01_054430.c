extern float D_0020DE48;
extern float D_0020DE4C;

void func_03A4E8(char *a0, int a1, unsigned a2);
void func_055E80(char *a0);
void func_0558C8(char *a0, float f12, float f13);
void func_055018(char *a0);
void func_054B90(char *a0);
void func_054F38(char *a0);
void func_055BC8(char *a0);
void func_054530(char *a0);
void func_0548B8(char *a0);

void func_054430(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_03A4E8(a0, 4, 0x0478FE9Au);
        func_03A4E8(a0, 5, 0x0478FE9Au);
    }
    func_055E80(a0);
    func_0558C8(a0, D_0020DE4C, D_0020DE48);
    func_055018(a0);
    func_054B90(a0);
    func_054F38(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_055BC8(a0);
        func_054530(a0);
    }
    func_0548B8(a0);
}
