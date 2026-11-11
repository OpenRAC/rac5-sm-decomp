extern void *D_00214050[];
extern void func_0B08B0(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_0AD010(int index, short first, short second, unsigned short third,
                 float fa, float fb, unsigned short fourth, int fifth, int sixth,
                 int seventh, int eighth, float fc)
{
    void **icons = D_00214050;
    void *icon = icons[index];
    func_0B08B0(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
