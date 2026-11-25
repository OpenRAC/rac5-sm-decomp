extern void *func_01AA20(void);
extern int func_086800(int, void *);

int func_1C3430(char *record)
{
    char *nested = *(char **)(record + 0x54);
    void *value = func_01AA20();
    return func_086800(*(int *)(nested + 0x34), value) != 0;
}
