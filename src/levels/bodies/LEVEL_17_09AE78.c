extern void *D_0019CF90[];
extern void func_09E800(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_09AE78(int index, short first, short second,
                 unsigned short third, unsigned short fourth,
                 int fifth, int sixth, int seventh, int eighth)
{
    void **icons = D_0019CF90;
    void *icon = icons[index];
    func_09E800(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
