extern char *func_021D08(unsigned int, long long);

void func_021900(void)
{
    unsigned int index = 0;
    do {
        char *item = func_021D08(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
