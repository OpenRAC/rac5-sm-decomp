extern int D_0024EAB0[];
extern void func_07EE90(float, float, int, int, int, int);

void func_065C98(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_07EE90(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_0024EAB0[0x11] = 0;
    D_0024EAB0[0x12] = 0;
}
