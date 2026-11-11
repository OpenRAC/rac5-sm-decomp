extern void func_067640(char *, int);
int func_067608(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_067640(record, 0);
        return 1;
    }
    return state == 5;
}