/* LEVEL_01:0x073F78 -- subtracts an amount from the record's byte; stops the record through func_07C670 when nothing is left, otherwise stores the remainder as the top byte of the colour word. */
extern void func_07C670(void *record, int k);

void func_073F78(char *record, int amount)
{
    int remaining = (unsigned char)record[0x6B];

    remaining -= amount;

    if (remaining < 1)
        func_07C670(record, 1);
    else
        *(unsigned int *)(record + 0x68) = (remaining << 24) | 0xFFFFFF;
}
