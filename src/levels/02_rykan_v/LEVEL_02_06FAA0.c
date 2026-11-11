extern void func_06FAD8(char *, int);
int func_06FAA0(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_06FAD8(record, 0);
        return 1;
    }
    return state == 5;
}