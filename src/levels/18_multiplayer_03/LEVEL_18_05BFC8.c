extern void func_05C000(char *, int);
int func_05BFC8(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_05C000(record, 0);
        return 1;
    }
    return state == 5;
}