extern float D_00216DC8;
extern float D_00216DCC;

void func_038CA0(char *a0, int a1, unsigned a2);
void func_054738(char *a0);
void func_054180(char *a0, float f12, float f13);
void func_0538D0(char *a0);
void func_053448(char *a0);
void func_0537F0(char *a0);
void func_054480(char *a0);
void func_052DE8(char *a0);
void func_053170(char *a0);

void func_052CE8(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_038CA0(a0, 4, 0x0478FE9Au);
        func_038CA0(a0, 5, 0x0478FE9Au);
    }
    func_054738(a0);
    func_054180(a0, D_00216DCC, D_00216DC8);
    func_0538D0(a0);
    func_053448(a0);
    func_0537F0(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_054480(a0);
        func_052DE8(a0);
    }
    func_053170(a0);
}
