extern float D_001625C8;
extern float D_001625CC;

void func_02EB58(char *a0, int a1, unsigned a2);
void func_047110(char *a0);
void func_046B58(char *a0, float f12, float f13);
void func_0462A8(char *a0);
void func_045E20(char *a0);
void func_0461C8(char *a0);
void func_046E58(char *a0);
void func_0457C0(char *a0);
void func_045B48(char *a0);

void func_0456C0(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_02EB58(a0, 4, 0x0478FE9Au);
        func_02EB58(a0, 5, 0x0478FE9Au);
    }
    func_047110(a0);
    func_046B58(a0, D_001625CC, D_001625C8);
    func_0462A8(a0);
    func_045E20(a0);
    func_0461C8(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_046E58(a0);
        func_0457C0(a0);
    }
    func_045B48(a0);
}
