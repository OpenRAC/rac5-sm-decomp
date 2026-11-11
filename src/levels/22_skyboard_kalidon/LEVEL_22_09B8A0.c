extern void *D_0015AD50[];
extern void func_09F140(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_09B8A0(int index, short first, short second, unsigned short third,
                 float fa, float fb, unsigned short fourth, int fifth, int sixth,
                 int seventh, int eighth, float fc)
{
    void **icons = D_0015AD50;
    void *icon = icons[index];
    func_09F140(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
