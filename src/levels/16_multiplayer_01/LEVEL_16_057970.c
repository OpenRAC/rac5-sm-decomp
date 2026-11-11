extern int D_001EB880[];
extern void func_06FCA8(float, float, int, int, int, int);

void func_057970(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_06FCA8(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_001EB880[0x11] = 0;
    D_001EB880[0x12] = 0;
}
