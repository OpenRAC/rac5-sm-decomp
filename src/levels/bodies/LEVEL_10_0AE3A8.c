extern void *D_002049D0[];
extern void func_0B1C48(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_0AE3A8(int index, short first, short second, unsigned short third,
                 float fa, float fb, unsigned short fourth, int fifth, int sixth,
                 int seventh, int eighth, float fc)
{
    void **icons = D_002049D0;
    void *icon = icons[index];
    func_0B1C48(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
