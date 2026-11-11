extern int D_0020BCD0[][3];
extern int D_00335BD8[];

int func_026D90(int a, int b);
int func_0BABE8(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0CFDA8(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_0020BCD0[i][0];
        if (func_026D90((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0BABE8(D_00335BD8, i, 0, color, color, 0xFF808080, 0);
    }
}
