extern char *func_022400(unsigned int, long long);

void func_022140(void)
{
    unsigned int index = 0;
    do {
        char *item = func_022400(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
