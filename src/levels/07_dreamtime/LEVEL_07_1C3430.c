extern long long func_01AA20(void);
extern long long func_086800(int, long long);

int func_1C3430(char *record)
{
    char *nested = *(char **)(record + 0x54);
    long long value = func_01AA20();
    return func_086800(*(int *)(nested + 0x34), value) != 0;
}
