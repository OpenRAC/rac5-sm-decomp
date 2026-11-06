extern void func_06C4A8(char *, int);
int func_06C470(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_06C4A8(record, 0);
        return 1;
    }
    return state == 5;
}