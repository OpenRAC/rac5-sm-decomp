extern int D_00150650[];
extern void func_08DAC0(int object, short a, short b,
                        unsigned short c, unsigned short d);

void func_08DDA0(int index, short a, short b,
                 unsigned short c, unsigned short d)
{
    func_08DAC0(D_00150650[index], a, b, c, d);
}
