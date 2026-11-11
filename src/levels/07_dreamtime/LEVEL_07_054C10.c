extern float D_00222B48;
extern float D_00222B4C;

void func_03AA18(char *a0, int a1, unsigned a2);
void func_056660(char *a0);
void func_0560A8(char *a0, float f12, float f13);
void func_0557F8(char *a0);
void func_055370(char *a0);
void func_055718(char *a0);
void func_0563A8(char *a0);
void func_054D10(char *a0);
void func_055098(char *a0);

void func_054C10(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_03AA18(a0, 4, 0x0478FE9Au);
        func_03AA18(a0, 5, 0x0478FE9Au);
    }
    func_056660(a0);
    func_0560A8(a0, D_00222B4C, D_00222B48);
    func_0557F8(a0);
    func_055370(a0);
    func_055718(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_0563A8(a0);
        func_054D10(a0);
    }
    func_055098(a0);
}
