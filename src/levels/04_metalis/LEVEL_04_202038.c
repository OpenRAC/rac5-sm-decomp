extern int D_002B25C0[];
extern void func_110CD8(int *, int);
extern void func_201820(void *);

void func_202038(char *record)
{
    unsigned int index = *(unsigned int *)record;
    unsigned int address = (unsigned int)D_002B25C0 + (index << 2);
    unsigned int bits = *(unsigned int *)address << 16;
    unsigned int value = (*(unsigned int *)(record + 4) & 0xF800FFFFU) | bits;
    char *item;
    unsigned int i;

    *(unsigned int *)(record + 4) = value;
    func_110CD8((int *)(record + 0x10), 2);
    item = record + 0xB8;
    for (i = 0; i < 2; ++i) {
        func_201820(item);
        item += 0x7C;
    }
}
