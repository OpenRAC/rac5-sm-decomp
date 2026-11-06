extern void *D_001EA8D0[];
extern void func_0AB300(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_0A7A60(int index, short first, short second,
                 unsigned short third, unsigned short fourth,
                 int fifth, int sixth, int seventh, int eighth)
{
    void **icons = D_001EA8D0;
    void *icon = icons[index];
    func_0AB300(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
