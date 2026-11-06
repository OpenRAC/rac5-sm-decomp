extern int D_00216FD0[][3];
extern int D_003420D8[];

int func_027810(int a, int b);
int func_0BB900(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0D09C8(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_00216FD0[i][0];
        if (func_027810((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0BB900(D_003420D8, i, 0, color, color, 0xFF808080, 0);
    }
}
