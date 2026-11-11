extern float D_00222DC8;
extern float D_00222DCC;

void func_03EF98(char *a0, int a1, unsigned a2);
void func_05ADA8(char *a0);
void func_05A7F0(char *a0, float f12, float f13);
void func_059F40(char *a0);
void func_059AB8(char *a0);
void func_059E60(char *a0);
void func_05AAF0(char *a0);
void func_059458(char *a0);
void func_0597E0(char *a0);

void func_059358(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_03EF98(a0, 4, 0x0478FE9Au);
        func_03EF98(a0, 5, 0x0478FE9Au);
    }
    func_05ADA8(a0);
    func_05A7F0(a0, D_00222DCC, D_00222DC8);
    func_059F40(a0);
    func_059AB8(a0);
    func_059E60(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_05AAF0(a0);
        func_059458(a0);
    }
    func_0597E0(a0);
}
