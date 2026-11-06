extern int D_002539C0[];
extern void func_080188(float, float, int, int, int, int);

void func_0669F8(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_080188(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_002539C0[0x11] = 0;
    D_002539C0[0x12] = 0;
}
