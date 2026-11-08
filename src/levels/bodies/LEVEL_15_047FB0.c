extern void func_02F6D8(void);
extern void func_06C4C8(unsigned int value);
extern void func_0F4D70(int value);

void func_047FB0(char *state)
{
    func_02F6D8();
    func_06C4C8(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_0F4D70(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
