extern float D_00123EA8;
extern float D_00123EAC;

void func_0309E8(char *a0, int a1, unsigned a2);
void func_047F20(char *a0);
void func_047968(char *a0, float f12, float f13);
void func_0470B8(char *a0);
void func_046C48(char *a0);
void func_046FD8(char *a0);
void func_047C68(char *a0);
void func_0465A0(char *a0);
void func_046988(char *a0);

void func_0464A0(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_0309E8(a0, 4, 0x0478FE9Au);
        func_0309E8(a0, 5, 0x0478FE9Au);
    }
    func_047F20(a0);
    func_047968(a0, D_00123EAC, D_00123EA8);
    func_0470B8(a0);
    func_046C48(a0);
    func_046FD8(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_047C68(a0);
        func_0465A0(a0);
    }
    func_046988(a0);
}
