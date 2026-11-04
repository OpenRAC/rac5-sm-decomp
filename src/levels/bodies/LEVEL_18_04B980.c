extern float D_001C43A8;
extern float D_001C43AC;

void func_034ED0(char *a0, int a1, unsigned a2);
void func_04D400(char *a0);
void func_04CE48(char *a0, float f12, float f13);
void func_04C598(char *a0);
void func_04C128(char *a0);
void func_04C4B8(char *a0);
void func_04D148(char *a0);
void func_04BA80(char *a0);
void func_04BE68(char *a0);

void func_04B980(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_034ED0(a0, 4, 0x0478FE9Au);
        func_034ED0(a0, 5, 0x0478FE9Au);
    }
    func_04D400(a0);
    func_04CE48(a0, D_001C43AC, D_001C43A8);
    func_04C598(a0);
    func_04C128(a0);
    func_04C4B8(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_04D148(a0);
        func_04BA80(a0);
    }
    func_04BE68(a0);
}
