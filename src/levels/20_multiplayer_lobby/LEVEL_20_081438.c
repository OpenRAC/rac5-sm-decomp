extern int func_081520(void);

int func_081438(char *record)
{
    return (func_081520() >> 1) + *(int *)(record + 4);
}
