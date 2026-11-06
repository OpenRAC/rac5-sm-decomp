extern int D_001431B0[];
extern void func_05ECB0(float, float, int, int, int, int);

void func_050F98(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_05ECB0(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_001431B0[0x11] = 0;
    D_001431B0[0x12] = 0;
}
