/* LEVEL_01:0x056D20 -- placement copy of LEVEL_02_05BC48.c. */
extern void func_03BE20(void *obj);
extern void func_087DE8(unsigned int value);
extern void func_135EC0(int value);

void func_056D20(char *state)
{
    func_03BE20(state);
    func_087DE8(2);
    if (*(int *)(state + 0xcf0) != 0) {
        func_135EC0(*(int *)(state + 0xcf0));
        *(int *)(state + 0xcf0) = 0;
    }
}
