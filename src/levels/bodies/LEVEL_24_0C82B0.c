extern int D_001D3950[][3];
extern int D_002F8698[];

int func_024DE0(int a, int b);
int func_0B3130(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0C82B0(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_001D3950[i][0];
        if (func_024DE0((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0B3130(D_002F8698, i, 0, color, color, 0xFF808080, 0);
    }
}
