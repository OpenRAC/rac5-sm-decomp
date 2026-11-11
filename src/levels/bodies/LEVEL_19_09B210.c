extern void *D_001AAB10[];
extern void func_09EB98(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_09B210(int index, short first, short second, unsigned short third,
                 float fa, float fb, unsigned short fourth, int fifth, int sixth,
                 int seventh, int eighth, float fc)
{
    void **icons = D_001AAB10;
    void *icon = icons[index];
    func_09EB98(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
