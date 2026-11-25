extern void *D_0002F9D0[];
extern void func_011AD8(void *, short, short, unsigned short, float, float,
                        unsigned short, int, int, int, int, float);

void func_00ECF0(int index, short first, short second,
                 unsigned short third, float x, float y, unsigned short fourth,
                 int fifth, int sixth, int seventh, int eighth, float z)
{
    void **icons = D_0002F9D0;
    void *icon = icons[index];
    func_011AD8(icon, first, second, third, x, y, fourth,
                fifth, sixth, seventh, eighth, z);
}
