extern void func_038528(void);
extern void func_080C60(unsigned int value);
extern void func_1685A8(int value);

void func_0535D0(char *state)
{
    func_038528();
    func_080C60(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_1685A8(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
