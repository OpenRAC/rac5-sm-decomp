extern void func_070288(char *, int);
int func_070250(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_070288(record, 0);
        return 1;
    }
    return state == 5;
}