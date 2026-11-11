extern void *D_001CEDD0[];
extern void func_0A78A0(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_0A4000(int index, short first, short second, unsigned short third,
                 float fa, float fb, unsigned short fourth, int fifth, int sixth,
                 int seventh, int eighth, float fc)
{
    void **icons = D_001CEDD0;
    void *icon = icons[index];
    func_0A78A0(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
