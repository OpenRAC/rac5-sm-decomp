extern int D_002E7040[];
extern void func_115828(int *, int);
extern void func_22F600(void *);

void func_22FFB0(char *record)
{
    unsigned int index = *(unsigned int *)record;
    unsigned int address = (unsigned int)D_002E7040 + (index << 2);
    unsigned int bits = *(unsigned int *)address << 16;
    unsigned int value = (*(unsigned int *)(record + 4) & 0xF800FFFFU) | bits;
    char *item;
    unsigned int i;

    *(unsigned int *)(record + 4) = value;
    func_115828((int *)(record + 0x10), 2);
    item = record + 0xB8;
    for (i = 0; i < 2; ++i) {
        func_22F600(item);
        item += 0x7C;
    }
}
