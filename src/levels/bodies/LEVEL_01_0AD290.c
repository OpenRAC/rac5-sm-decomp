extern void *D_001FB9D0[];
extern void func_0B0B30(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_0AD290(int index, short first, short second,
                 unsigned short third, unsigned short fourth,
                 int fifth, int sixth, int seventh, int eighth)
{
    void **icons = D_001FB9D0;
    void *icon = icons[index];
    func_0B0B30(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
