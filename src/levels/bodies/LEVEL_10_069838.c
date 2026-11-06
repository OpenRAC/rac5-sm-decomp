extern void func_069870(char *, int);
int func_069838(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_069870(record, 0);
        return 1;
    }
    return state == 5;
}