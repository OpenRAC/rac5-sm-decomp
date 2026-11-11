extern char *func_023F90(unsigned int, long long);

void func_023CD0(void)
{
    unsigned int index = 0;
    do {
        char *item = func_023F90(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
