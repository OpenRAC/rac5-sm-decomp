extern int D_001B2000[][3];
extern int D_0027ABD8[];

int func_024500(int a, int b);
int func_0A78C8(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0BD040(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_001B2000[i][0];
        if (func_024500((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0A78C8(D_0027ABD8, i, 0, color, color, 0xFF808080, 0);
    }
}
