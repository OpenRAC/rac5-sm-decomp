extern void func_0382E0(void *obj);
extern void func_0847A0(unsigned int value);
extern void func_16C1E0(int value);

void func_053410(char *state)
{
    func_0382E0(state);
    func_0847A0(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_16C1E0(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
