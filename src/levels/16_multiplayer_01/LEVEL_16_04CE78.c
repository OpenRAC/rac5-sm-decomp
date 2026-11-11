extern float D_001C2E28;
extern float D_001C2E2C;

void func_036600(char *a0, int a1, unsigned a2);
void func_04E8F8(char *a0);
void func_04E340(char *a0, float f12, float f13);
void func_04DA90(char *a0);
void func_04D620(char *a0);
void func_04D9B0(char *a0);
void func_04E640(char *a0);
void func_04CF78(char *a0);
void func_04D360(char *a0);

void func_04CE78(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_036600(a0, 4, 0x0478FE9Au);
        func_036600(a0, 5, 0x0478FE9Au);
    }
    func_04E8F8(a0);
    func_04E340(a0, D_001C2E2C, D_001C2E28);
    func_04DA90(a0);
    func_04D620(a0);
    func_04D9B0(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_04E640(a0);
        func_04CF78(a0);
    }
    func_04D360(a0);
}
