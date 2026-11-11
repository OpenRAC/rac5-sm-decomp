extern int func_023BC8(unsigned int);
extern void func_023B18(unsigned int);
extern void func_023AB0(unsigned int);

void func_023B80(unsigned int bit)
{
    if (func_023BC8(bit) != 0) {
        func_023B18(bit);
    } else {
        func_023AB0(bit);
    }
}
