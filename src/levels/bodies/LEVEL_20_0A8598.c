extern int D_00113260[][3];
extern int D_0019E098[];

int func_021AC8(int a, int b);
int func_092E20(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0A8598(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_00113260[i][0];
        if (func_021AC8((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_092E20(D_0019E098, i, 0, color, color, 0xFF808080, 0);
    }
}
