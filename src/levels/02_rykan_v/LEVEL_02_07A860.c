/* LEVEL_02:0x07A860 -- placement copy of LEVEL_01_073F78.c: subtracts an amount from the record's byte; stops the record through func_082F58 when nothing is left, otherwise stores the remainder as the top byte of the colour word. */
extern void func_082F58(void *record, int k);

void func_07A860(char *record, int amount)
{
    int remaining = (unsigned char)record[0x6B];

    remaining -= amount;

    if (remaining < 1)
        func_082F58(record, 1);
    else
        *(unsigned int *)(record + 0x68) = (remaining << 24) | 0xFFFFFF;
}
