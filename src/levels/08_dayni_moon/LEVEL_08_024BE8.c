extern char *func_024EA8(unsigned int, long long);

void func_024BE8(void)
{
    unsigned int index = 0;
    do {
        char *item = func_024EA8(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
