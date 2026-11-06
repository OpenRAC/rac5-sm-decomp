typedef struct {
    char before[0x2c];
    int center;
    char after[0x16dc];
} Block;
extern Block D_002B5D78[];

void func_0981D0(void)
{
    int index = 0;
    Block *block = D_002B5D78;
    do {
        char *entry = (char *)&block->center;
        *(int *)(entry - 0x24) = 0;
        ++index;
        *(int *)(entry + 4) = 0;
        *(int *)(entry - 0x18) = 0;
        *(int *)entry = 0;
        ++block;
    } while (index == 0);
}