extern float D_001C4028;
extern float D_001C402C;

void func_035990(char *a0, int a1, unsigned a2);
void func_04DD58(char *a0);
void func_04D7A0(char *a0, float f12, float f13);
void func_04CEF0(char *a0);
void func_04CA80(char *a0);
void func_04CE10(char *a0);
void func_04DAA0(char *a0);
void func_04C3D8(char *a0);
void func_04C7C0(char *a0);

void func_04C2D8(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_035990(a0, 4, 0x0478FE9Au);
        func_035990(a0, 5, 0x0478FE9Au);
    }
    func_04DD58(a0);
    func_04D7A0(a0, D_001C402C, D_001C4028);
    func_04CEF0(a0);
    func_04CA80(a0);
    func_04CE10(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_04DAA0(a0);
        func_04C3D8(a0);
    }
    func_04C7C0(a0);
}
