extern int D_0021B350[][3];
extern int D_00347658[];

int func_027390(int a, int b);
int func_0B9688(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0CE750(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_0021B350[i][0];
        if (func_027390((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0B9688(D_00347658, i, 0, color, color, 0xFF808080, 0);
    }
}
