extern int D_001B0B80[][3];
extern int D_0027A858[];

int func_024F50(int a, int b);
int func_0A88F0(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0BE068(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_001B0B80[i][0];
        if (func_024F50((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0A88F0(D_0027A858, i, 0, color, color, 0xFF808080, 0);
    }
}
