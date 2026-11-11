extern void func_002550(void);
extern void func_002C70(unsigned int);
extern void func_0018C0(int);
extern void func_001000(int);

void func_002590(void)
{
    unsigned int index = 0;
    func_002550();
    do {
        func_002C70(index);
        index++;
    } while (index < 2);
    func_0018C0(0);
    func_001000(0);
}
