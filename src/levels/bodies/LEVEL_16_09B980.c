extern void *D_001A9990[];
extern void func_09F308(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_09B980(int index, short first, short second,
                 unsigned short third, unsigned short fourth,
                 int fifth, int sixth, int seventh, int eighth)
{
    void **icons = D_001A9990;
    void *icon = icons[index];
    func_09F308(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
