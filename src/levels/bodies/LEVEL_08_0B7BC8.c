extern void *D_00244890[];
extern void func_0BB468(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_0B7BC8(int index, short first, short second, unsigned short third,
                 float fa, float fb, unsigned short fourth, int fifth, int sixth,
                 int seventh, int eighth, float fc)
{
    void **icons = D_00244890;
    void *icon = icons[index];
    func_0BB468(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
