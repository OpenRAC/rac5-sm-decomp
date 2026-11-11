extern void *D_001AAE10[];
extern void func_09E318(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_09A990(int index, short first, short second, unsigned short third,
                 float fa, float fb, unsigned short fourth, int fifth, int sixth,
                 int seventh, int eighth, float fc)
{
    void **icons = D_001AAE10;
    void *icon = icons[index];
    func_09E318(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
