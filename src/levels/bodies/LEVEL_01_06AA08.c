extern void func_06AA40(char *, int);
int func_06AA08(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_06AA40(record, 0);
        return 1;
    }
    return state == 5;
}