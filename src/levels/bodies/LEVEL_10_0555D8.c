extern void func_03A4E8(void);
extern void func_088150(unsigned int value);
extern void func_17ABD8(int value);

void func_0555D8(char *state)
{
    func_03A4E8();
    func_088150(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_17ABD8(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
