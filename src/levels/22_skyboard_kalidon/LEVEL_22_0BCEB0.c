extern int D_00162050[][3];
extern int D_00282398[];

int func_021E40(int a, int b);
int func_0A7D48(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0BCEB0(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_00162050[i][0];
        if (func_021E40((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0A7D48(D_00282398, i, 0, color, color, 0xFF808080, 0);
    }
}
