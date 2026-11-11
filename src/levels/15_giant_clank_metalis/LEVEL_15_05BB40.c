extern void func_05BB78(char *, int);
int func_05BB40(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_05BB78(record, 0);
        return 1;
    }
    return state == 5;
}