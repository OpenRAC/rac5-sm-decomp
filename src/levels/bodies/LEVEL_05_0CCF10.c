extern int D_001F2050[][3];
extern int D_00318698[];

int func_0261F0(int a, int b);
int func_0B7E48(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0CCF10(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_001F2050[i][0];
        if (func_0261F0((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0B7E48(D_00318698, i, 0, color, color, 0xFF808080, 0);
    }
}
