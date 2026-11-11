extern float D_002277C8;
extern float D_002277CC;

void func_03BB30(char *a0, int a1, unsigned a2);
void func_057840(char *a0);
void func_057288(char *a0, float f12, float f13);
void func_0569D8(char *a0);
void func_056550(char *a0);
void func_0568F8(char *a0);
void func_057588(char *a0);
void func_055EF0(char *a0);
void func_056278(char *a0);

void func_055DF0(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_03BB30(a0, 4, 0x0478FE9Au);
        func_03BB30(a0, 5, 0x0478FE9Au);
    }
    func_057840(a0);
    func_057288(a0, D_002277CC, D_002277C8);
    func_0569D8(a0);
    func_056550(a0);
    func_0568F8(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_057588(a0);
        func_055EF0(a0);
    }
    func_056278(a0);
}
