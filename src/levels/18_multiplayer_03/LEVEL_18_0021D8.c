extern void func_002198(void);
extern void func_0028B8(unsigned int);
extern void func_001508(int);
extern void func_000BF0(int);

void func_0021D8(void)
{
    unsigned int index = 0;
    func_002198();
    do {
        func_0028B8(index);
        index++;
    } while (index < 2);
    func_001508(0);
    func_000BF0(0);
}
