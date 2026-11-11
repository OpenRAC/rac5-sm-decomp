extern void func_064090(char *, int);
int func_064058(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_064090(record, 0);
        return 1;
    }
    return state == 5;
}