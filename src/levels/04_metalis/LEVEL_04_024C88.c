extern char *func_0242F0(unsigned int, int);

int func_024C88(unsigned int index)
{
    if (index < 25) {
        char *record = func_0242F0(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
