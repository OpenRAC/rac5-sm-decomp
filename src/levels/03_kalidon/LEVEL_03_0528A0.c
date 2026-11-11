extern float D_00226D48;
extern float D_00226D4C;

void func_038728(char *a0, int a1, unsigned a2);
void func_0542F0(char *a0);
void func_053D38(char *a0, float f12, float f13);
void func_053488(char *a0);
void func_053000(char *a0);
void func_0533A8(char *a0);
void func_054038(char *a0);
void func_0529A0(char *a0);
void func_052D28(char *a0);

void func_0528A0(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_038728(a0, 4, 0x0478FE9Au);
        func_038728(a0, 5, 0x0478FE9Au);
    }
    func_0542F0(a0);
    func_053D38(a0, D_00226D4C, D_00226D48);
    func_053488(a0);
    func_053000(a0);
    func_0533A8(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_054038(a0);
        func_0529A0(a0);
    }
    func_052D28(a0);
}
