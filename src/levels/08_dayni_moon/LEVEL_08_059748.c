extern float D_00257AC8;
extern float D_00257ACC;

void func_03F640(char *a0, int a1, unsigned a2);
void func_05B198(char *a0);
void func_05ABE0(char *a0, float f12, float f13);
void func_05A330(char *a0);
void func_059EA8(char *a0);
void func_05A250(char *a0);
void func_05AEE0(char *a0);
void func_059848(char *a0);
void func_059BD0(char *a0);

void func_059748(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_03F640(a0, 4, 0x0478FE9Au);
        func_03F640(a0, 5, 0x0478FE9Au);
    }
    func_05B198(a0);
    func_05ABE0(a0, D_00257ACC, D_00257AC8);
    func_05A330(a0);
    func_059EA8(a0);
    func_05A250(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_05AEE0(a0);
        func_059848(a0);
    }
    func_059BD0(a0);
}
