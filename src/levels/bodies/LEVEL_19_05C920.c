extern void func_05C958(char *, int);
int func_05C920(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_05C958(record, 0);
        return 1;
    }
    return state == 5;
}