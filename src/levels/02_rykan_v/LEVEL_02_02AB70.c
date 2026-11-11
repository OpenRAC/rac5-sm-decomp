extern int func_02ABB8(unsigned int);
extern void func_02AB08(unsigned int);
extern void func_02AAA0(unsigned int);

void func_02AB70(unsigned int bit)
{
    if (func_02ABB8(bit) != 0) {
        func_02AB08(bit);
    } else {
        func_02AAA0(bit);
    }
}
