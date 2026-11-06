extern int D_0018ADB0[];
extern void func_06F718(float, float, int, int, int, int);

void func_05AB98(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_06F718(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_0018ADB0[0x11] = 0;
    D_0018ADB0[0x12] = 0;
}
