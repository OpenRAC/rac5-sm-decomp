extern void func_039A00(void);
extern void func_085740(unsigned int value);
extern void func_131840(int value);

void func_0548F8(char *state)
{
    func_039A00();
    func_085740(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_131840(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
