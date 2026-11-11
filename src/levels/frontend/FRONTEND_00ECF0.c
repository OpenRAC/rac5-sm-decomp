extern void *D_0002F9D0[];
extern void func_011AD8(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_00ECF0(int index, short first, short second,
                 unsigned short third, unsigned short fourth,
                 int fifth, int sixth, int seventh, int eighth)
{
    void **icons = D_0002F9D0;
    void *icon = icons[index];
    func_011AD8(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
