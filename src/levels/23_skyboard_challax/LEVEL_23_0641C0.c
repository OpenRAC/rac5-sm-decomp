extern void func_0641F8(char *, int);
int func_0641C0(char *record)
{
    int state = *(int *)(record + 0xe7c);
    if (state == 4) {
        func_0641F8(record, 0);
        return 1;
    }
    return state == 5;
}