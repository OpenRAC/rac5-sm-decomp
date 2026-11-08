extern void func_0319C0(void);
extern void func_079200(unsigned int value);
extern void func_10D3A0(int value);

void func_04C518(char *state)
{
    func_0319C0();
    func_079200(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_10D3A0(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
