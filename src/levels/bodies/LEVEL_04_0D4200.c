extern int D_0021C190[][3];
extern int D_00346FD8[];

int func_027140(int a, int b);
int func_0BF080(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0D4200(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_0021C190[i][0];
        if (func_027140((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0BF080(D_00346FD8, i, 0, color, color, 0xFF808080, 0);
    }
}
