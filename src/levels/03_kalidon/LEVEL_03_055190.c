extern void func_03A0C0(void *obj);
extern void func_087C40(unsigned int value);
extern void func_178620(int value);

void func_055190(char *state)
{
    func_03A0C0(state);
    func_087C40(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_178620(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
