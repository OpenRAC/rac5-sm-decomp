extern int D_00206630[];
extern void func_074128(float, float, int, int, int, int);

void func_05E748(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_074128(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_00206630[0x11] = 0;
    D_00206630[0x12] = 0;
}
