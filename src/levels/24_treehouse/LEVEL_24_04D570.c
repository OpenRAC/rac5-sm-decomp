extern float D_001DEBC8;
extern float D_001DEBCC;

void func_0335E0(char *a0, int a1, unsigned a2);
void func_04EFC0(char *a0);
void func_04EA08(char *a0, float f12, float f13);
void func_04E158(char *a0);
void func_04DCD0(char *a0);
void func_04E078(char *a0);
void func_04ED08(char *a0);
void func_04D670(char *a0);
void func_04D9F8(char *a0);

void func_04D570(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_0335E0(a0, 4, 0x0478FE9Au);
        func_0335E0(a0, 5, 0x0478FE9Au);
    }
    func_04EFC0(a0);
    func_04EA08(a0, D_001DEBCC, D_001DEBC8);
    func_04E158(a0);
    func_04DCD0(a0);
    func_04E078(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_04ED08(a0);
        func_04D670(a0);
    }
    func_04D9F8(a0);
}
