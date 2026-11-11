extern int D_002B2C40[];
extern void func_103438(int *, int);
extern void func_200CF0(void *);

void func_201508(char *record)
{
    unsigned int index = *(unsigned int *)record;
    unsigned int address = (unsigned int)D_002B2C40 + (index << 2);
    unsigned int bits = *(unsigned int *)address << 16;
    unsigned int value = (*(unsigned int *)(record + 4) & 0xF800FFFFU) | bits;
    char *item;
    unsigned int i;

    *(unsigned int *)(record + 4) = value;
    func_103438((int *)(record + 0x10), 2);
    item = record + 0xB8;
    for (i = 0; i < 2; ++i) {
        func_200CF0(item);
        item += 0x7C;
    }
}
