extern int D_00217C90[][3];
extern int D_00343CD8[];

int func_027C98(int a, int b);
int func_0C01B0(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0D52F8(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_00217C90[i][0];
        if (func_027C98((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0C01B0(D_00343CD8, i, 0, color, color, 0xFF808080, 0);
    }
}
