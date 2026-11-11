extern void func_067800(char *, int);
int func_0677C8(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_067800(record, 0);
        return 1;
    }
    return state == 5;
}