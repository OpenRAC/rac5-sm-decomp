extern float D_001F7A48;
extern float D_001F7A4C;

void func_036A98(char *a0, int a1, unsigned a2);
void func_052570(char *a0);
void func_051FB8(char *a0, float f12, float f13);
void func_051708(char *a0);
void func_051280(char *a0);
void func_051628(char *a0);
void func_0522B8(char *a0);
void func_050C20(char *a0);
void func_050FA8(char *a0);

void func_050B20(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_036A98(a0, 4, 0x0478FE9Au);
        func_036A98(a0, 5, 0x0478FE9Au);
    }
    func_052570(a0);
    func_051FB8(a0, D_001F7A4C, D_001F7A48);
    func_051708(a0);
    func_051280(a0);
    func_051628(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_0522B8(a0);
        func_050C20(a0);
    }
    func_050FA8(a0);
}
