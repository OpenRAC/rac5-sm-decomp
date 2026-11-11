extern int D_00202CD0[][3];
extern int D_0032C7D8[];

int func_0274B0(int a, int b);
int func_0B98A0(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0CE968(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_00202CD0[i][0];
        if (func_0274B0((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0B98A0(D_0032C7D8, i, 0, color, color, 0xFF808080, 0);
    }
}
