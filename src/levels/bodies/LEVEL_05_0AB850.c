extern void *D_001EAD50[];
extern void func_0AF0F0(void *, short, short, unsigned short,
                        unsigned short, int, int, int, int);

void func_0AB850(int index, short first, short second,
                 unsigned short third, unsigned short fourth,
                 int fifth, int sixth, int seventh, int eighth)
{
    void **icons = D_001EAD50;
    void *icon = icons[index];
    func_0AF0F0(icon, first, second, third, fourth,
                fifth, sixth, seventh, eighth);
}
