extern void func_002128(void);
extern void func_002848(unsigned int);
extern void func_001498(int);
extern void func_000BF0(int);

void func_002168(void)
{
    unsigned int index = 0;
    func_002128();
    do {
        func_002848(index);
        index++;
    } while (index < 2);
    func_001498(0);
    func_000BF0(0);
}
