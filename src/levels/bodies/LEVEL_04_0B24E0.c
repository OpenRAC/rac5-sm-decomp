extern void *D_00214E90[];
extern void func_0B5D80(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_0B24E0(int index, short first, short second,
                 unsigned short third, unsigned short fourth,
                 int fifth, int sixth, int seventh, int eighth)
{
    void **icons = D_00214E90;
    void *icon = icons[index];
    func_0B5D80(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
