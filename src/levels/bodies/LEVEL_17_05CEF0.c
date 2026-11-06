extern void func_05CF28(char *, int);
int func_05CEF0(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_05CF28(record, 0);
        return 1;
    }
    return state == 5;
}