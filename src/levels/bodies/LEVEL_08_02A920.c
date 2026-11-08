extern int func_02A968(unsigned int);
extern void func_02A8B8(unsigned int);
extern void func_02A850(unsigned int);

void func_02A920(unsigned int bit)
{
    if (func_02A968(bit) != 0) {
        func_02A8B8(bit);
    } else {
        func_02A850(bit);
    }
}
