extern void func_056B20(char *, int);
int func_056AE8(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_056B20(record, 0);
        return 1;
    }
    return state == 5;
}