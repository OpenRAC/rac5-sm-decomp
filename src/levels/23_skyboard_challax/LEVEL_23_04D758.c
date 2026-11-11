extern float D_001E0FC8;
extern float D_001E0FCC;

void func_033A18(char *a0, int a1, unsigned a2);
void func_04F1A8(char *a0);
void func_04EBF0(char *a0, float f12, float f13);
void func_04E340(char *a0);
void func_04DEB8(char *a0);
void func_04E260(char *a0);
void func_04EEF0(char *a0);
void func_04D858(char *a0);
void func_04DBE0(char *a0);

void func_04D758(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_033A18(a0, 4, 0x0478FE9Au);
        func_033A18(a0, 5, 0x0478FE9Au);
    }
    func_04F1A8(a0);
    func_04EBF0(a0, D_001E0FCC, D_001E0FC8);
    func_04E340(a0);
    func_04DEB8(a0);
    func_04E260(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_04EEF0(a0);
        func_04D858(a0);
    }
    func_04DBE0(a0);
}
