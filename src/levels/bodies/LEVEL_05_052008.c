extern float D_001FCD48;
extern float D_001FCD4C;

void func_0381F8(char *a0, int a1, unsigned a2);
void func_053A58(char *a0);
void func_0534A0(char *a0, float f12, float f13);
void func_052BF0(char *a0);
void func_052768(char *a0);
void func_052B10(char *a0);
void func_0537A0(char *a0);
void func_052108(char *a0);
void func_052490(char *a0);

void func_052008(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_0381F8(a0, 4, 0x0478FE9Au);
        func_0381F8(a0, 5, 0x0478FE9Au);
    }
    func_053A58(a0);
    func_0534A0(a0, D_001FCD4C, D_001FCD48);
    func_052BF0(a0);
    func_052768(a0);
    func_052B10(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_0537A0(a0);
        func_052108(a0);
    }
    func_052490(a0);
}
