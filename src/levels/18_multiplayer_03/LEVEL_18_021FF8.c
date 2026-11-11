extern char *func_021758(unsigned int, int);

int func_021FF8(unsigned int index)
{
    if (index < 25) {
        char *record = func_021758(index, -1);
        if (*(int *)(record + 0x34) != 0)
            return 1;
    }
    return 0;
}
