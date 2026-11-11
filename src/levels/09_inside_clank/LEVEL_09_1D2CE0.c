extern int D_0027F540[];
extern void func_100A80(int *, int);
extern void func_1D24C8(void *);

void func_1D2CE0(char *record)
{
    unsigned int index = *(unsigned int *)record;
    unsigned int address = (unsigned int)D_0027F540 + (index << 2);
    unsigned int bits = *(unsigned int *)address << 16;
    unsigned int value = (*(unsigned int *)(record + 4) & 0xF800FFFFU) | bits;
    char *item;
    unsigned int i;

    *(unsigned int *)(record + 4) = value;
    func_100A80((int *)(record + 0x10), 2);
    item = record + 0xB8;
    for (i = 0; i < 2; ++i) {
        func_1D24C8(item);
        item += 0x7C;
    }
}
