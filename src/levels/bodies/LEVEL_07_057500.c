extern void func_03C3B0(void);
extern void func_089EB8(unsigned int value);
extern void func_185610(int value);

void func_057500(char *state)
{
    func_03C3B0();
    func_089EB8(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_185610(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
