extern int D_00220930[];
extern void func_0797A8(float, float, int, int, int, int);

void func_061B90(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_0797A8(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_00220930[0x11] = 0;
    D_00220930[0x12] = 0;
}
