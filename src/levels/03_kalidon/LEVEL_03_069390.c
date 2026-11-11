extern void func_0693C8(char *, int);
int func_069390(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_0693C8(record, 0);
        return 1;
    }
    return state == 5;
}