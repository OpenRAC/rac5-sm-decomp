extern int D_001A9990[];
extern void func_09B8E8(int object, short a, short b,
                        unsigned short c, unsigned short d);

void func_09BBC8(int index, short a, short b,
                 unsigned short c, unsigned short d)
{
    func_09B8E8(D_001A9990[index], a, b, c, d);
}
