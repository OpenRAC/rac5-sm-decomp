extern int D_001EBA00[];
extern void func_06FE08(float, float, int, int, int, int);

void func_056DD0(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_06FE08(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_001EBA00[0x11] = 0;
    D_001EBA00[0x12] = 0;
}
