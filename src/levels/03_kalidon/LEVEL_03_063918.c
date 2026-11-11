extern int D_00254030[];
extern void func_07CB08(float, float, int, int, int, int);

void func_063918(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_07CB08(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_00254030[0x11] = 0;
    D_00254030[0x12] = 0;
}
