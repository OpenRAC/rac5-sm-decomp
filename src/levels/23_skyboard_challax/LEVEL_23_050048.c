extern void func_0352A0(void *obj);
extern void func_07DCA8(unsigned int value);
extern void func_127650(int value);

void func_050048(char *state)
{
    func_0352A0(state);
    func_07DCA8(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_127650(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
