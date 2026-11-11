extern int func_09F508(void);

int func_09F420(char *record)
{
    return (func_09F508() >> 1) + *(int *)(record + 4);
}
