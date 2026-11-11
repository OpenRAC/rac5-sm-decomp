extern void func_06B748(char *, int);
int func_06B710(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_06B748(record, 0);
        return 1;
    }
    return state == 5;
}