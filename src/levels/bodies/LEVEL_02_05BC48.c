extern void func_040D18(void);
extern void func_08E718(unsigned int value);
extern void func_13C270(int value);

void func_05BC48(char *state)
{
    func_040D18();
    func_08E718(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_13C270(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
