extern int D_001ECAD0[][3];
extern int D_00313F58[];

int func_0264B8(int a, int b);
int func_0B6B50(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0CBC18(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_001ECAD0[i][0];
        if (func_0264B8((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0B6B50(D_00313F58, i, 0, color, color, 0xFF808080, 0);
    }
}
