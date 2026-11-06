extern int D_001EBC00[];
extern void func_06F370(float, float, int, int, int, int);

void func_056478(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_06F370(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_001EBC00[0x11] = 0;
    D_001EBC00[0x12] = 0;
}
