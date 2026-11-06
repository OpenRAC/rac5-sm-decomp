extern void func_002558(void);
extern void func_002C78(unsigned int);
extern void func_0018C8(int);
extern void func_001000(int);

void func_002598(void)
{
    unsigned int index = 0;
    func_002558();
    do {
        func_002C78(index);
        index++;
    } while (index < 2);
    func_0018C8(0);
    func_001000(0);
}
