extern void func_0686A8(char *, int);
int func_068670(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_0686A8(record, 0);
        return 1;
    }
    return state == 5;
}