extern void *D_001E57D0[];
extern void func_0ADDE0(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_0AA540(int index, short first, short second, unsigned short third,
                 float fa, float fb, unsigned short fourth, int fifth, int sixth,
                 int seventh, int eighth, float fc)
{
    void **icons = D_001E57D0;
    void *icon = icons[index];
    func_0ADDE0(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
