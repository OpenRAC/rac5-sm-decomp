extern int D_001F1BD0[][3];
extern int D_00319558[];

int func_025960(int a, int b);
int func_0B41A0(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0C9268(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_001F1BD0[i][0];
        if (func_025960((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0B41A0(D_00319558, i, 0, color, color, 0xFF808080, 0);
    }
}
