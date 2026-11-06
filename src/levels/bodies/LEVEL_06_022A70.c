extern char *func_022D30(unsigned int, long long);

void func_022A70(void)
{
    unsigned int index = 0;
    do {
        char *item = func_022D30(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
