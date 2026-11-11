extern void *D_0010C070[];
extern void func_089A00(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_086078(int index, short first, short second, unsigned short third,
                 float fa, float fb, unsigned short fourth, int fifth, int sixth,
                 int seventh, int eighth, float fc)
{
    void **icons = D_0010C070;
    void *icon = icons[index];
    func_089A00(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
