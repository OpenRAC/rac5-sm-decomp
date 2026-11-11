extern void *D_001CC650[];
extern void func_0AA3A8(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_0A6B08(int index, short first, short second, unsigned short third,
                 float fa, float fb, unsigned short fourth, int fifth, int sixth,
                 int seventh, int eighth, float fc)
{
    void **icons = D_001CC650;
    void *icon = icons[index];
    func_0AA3A8(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
