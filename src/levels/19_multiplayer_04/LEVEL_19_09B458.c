extern int D_001AAB10[];
extern void func_09B178(int object, short a, short b,
                        unsigned short c, unsigned short d, int col);

void func_09B458(int index, short a, short b,
                 unsigned short c, unsigned short d, int col)
{
    func_09B178(D_001AAB10[index], a, b, c, d, col);
}
