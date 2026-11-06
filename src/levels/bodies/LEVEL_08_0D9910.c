extern int D_0024BB90[][3];
extern int D_0037BA58[];

int func_027AD8(int a, int b);
int func_0C4790(int a, int b, int c, unsigned int d, unsigned int e, unsigned int f, int g);

void func_0D9910(void)
{
    unsigned int i;
    int value;
    unsigned int color;

    for (i = 0; i < 25; i++) {
        value = D_0024BB90[i][0];
        if (func_027AD8((value >> 3) + 0x77, value & 7) != 0)
            color = 0xFFFFFFFF;
        else
            color = 0xFF808080;
        func_0C4790(D_0037BA58, i, 0, color, color, 0xFF808080, 0);
    }
}
