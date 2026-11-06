extern char *func_01F460(unsigned int, long long);

void func_01F1A0(void)
{
    unsigned int index = 0;
    do {
        char *item = func_01F460(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
