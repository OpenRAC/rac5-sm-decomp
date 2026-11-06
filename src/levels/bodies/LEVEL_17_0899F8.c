typedef struct { char before[0x2c]; int center; char after[0x16dc]; } Block;
extern Block D_00242638[];
void func_0899F8(void)
{
    Block *block = D_00242638;
    unsigned int index = 0;
    do {
        int *entry = &block->center;
        entry[-9] = 0;
        ++index;
        entry[1] = 0;
        entry[-6] = 0;
        *entry = 0;
        ++block;
    } while (index < 2);
}