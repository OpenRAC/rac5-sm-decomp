extern int D_00157950[][3];
extern int D_00244018[];

int func_0214A0(int a, int b);
int func_099EE8(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0AEFB0(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_00157950[i][0];
        if (func_0214A0((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_099EE8(D_00244018, i, 0, color, color, 0xFF808080, 0);
    }
}
