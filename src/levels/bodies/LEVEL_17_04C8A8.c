extern float D_001B62A8;
extern float D_001B62AC;

void func_035F50(char *a0, int a1, unsigned a2);
void func_04E328(char *a0);
void func_04DD70(char *a0, float f12, float f13);
void func_04D4C0(char *a0);
void func_04D050(char *a0);
void func_04D3E0(char *a0);
void func_04E070(char *a0);
void func_04C9A8(char *a0);
void func_04CD90(char *a0);

void func_04C8A8(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_035F50(a0, 4, 0x0478FE9Au);
        func_035F50(a0, 5, 0x0478FE9Au);
    }
    func_04E328(a0);
    func_04DD70(a0, D_001B62AC, D_001B62A8);
    func_04D4C0(a0);
    func_04D050(a0);
    func_04D3E0(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_04E070(a0);
        func_04C9A8(a0);
    }
    func_04CD90(a0);
}
