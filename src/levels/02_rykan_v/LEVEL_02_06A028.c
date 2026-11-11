extern int D_002506C0[];
extern void func_0835F8(float, float, int, int, int, int);

void func_06A028(char *record)
{
    *(int *)(record + 0x36c) = 0x31;
    func_0835F8(0.1f, 0.0f, *(int *)(record + 0x59c), 0x31, 0, 1);
    *(short *)(record + 0x108) = 1;
    D_002506C0[0x11] = 0;
    D_002506C0[0x12] = 0;
}
