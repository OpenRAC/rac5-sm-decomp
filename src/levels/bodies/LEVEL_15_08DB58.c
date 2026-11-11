extern void *D_00150650[];
extern void func_0913F8(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_08DB58(int index, short first, short second, unsigned short third,
                 float fa, float fb, unsigned short fourth, int fifth, int sixth,
                 int seventh, int eighth, float fc)
{
    void **icons = D_00150650;
    void *icon = icons[index];
    func_0913F8(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
