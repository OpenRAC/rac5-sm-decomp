extern void func_034EA8(void *obj);
extern void func_081088(unsigned int value);
extern void func_15E6E0(int value);

void func_04FE60(char *state)
{
    func_034EA8(state);
    func_081088(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_15E6E0(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
