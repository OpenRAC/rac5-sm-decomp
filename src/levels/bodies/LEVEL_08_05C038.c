extern void func_040F08(void *obj);
extern void func_08FE38(unsigned int value);
extern void func_195BF8(int value);

void func_05C038(char *state)
{
    func_040F08(state);
    func_08FE38(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_195BF8(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
