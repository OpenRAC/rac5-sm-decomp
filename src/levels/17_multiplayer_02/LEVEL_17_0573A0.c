extern int D_001DCB80[];
extern void func_0703D8(float, float, int, int, int, int);

void func_0573A0(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_0703D8(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_001DCB80[0x11] = 0;
    D_001DCB80[0x12] = 0;
}
