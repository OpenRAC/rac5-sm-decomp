extern void func_03D800(void *obj);
extern void func_08B080(unsigned int value);
extern void func_142300(int value);

void func_0586E0(char *state)
{
    func_03D800(state);
    func_08B080(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_142300(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
