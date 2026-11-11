extern void func_002530(void);
extern void func_002C50(unsigned int);
extern void func_0018A0(int);
extern void func_001000(int);

void func_002570(void)
{
    unsigned int index = 0;
    func_002530();
    do {
        func_002C50(index);
        index++;
    } while (index < 2);
    func_0018A0(0);
    func_001000(0);
}
