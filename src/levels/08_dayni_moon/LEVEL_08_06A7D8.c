extern int D_00288440[];
extern void func_084C98(float, float, int, int, int, int);

void func_06A7D8(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_084C98(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_00288440[0x11] = 0;
    D_00288440[0x12] = 0;
}
