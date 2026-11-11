extern void func_060648(char *, int);
int func_060610(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_060648(record, 0);
        return 1;
    }
    return state == 5;
}