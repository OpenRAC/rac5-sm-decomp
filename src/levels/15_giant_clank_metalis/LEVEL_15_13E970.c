/* LEVEL_15:0x13E970 -- placement copy of LEVEL_01_1E8E78.c. */
extern int D_001AFE00[];
extern void func_0D0278(int *, int);
extern void func_13E088(void *);

void func_13E970(char *record)
{
    unsigned int index = *(unsigned int *)record;
    unsigned int address = (unsigned int)D_001AFE00 + (index << 2);
    unsigned int bits = *(unsigned int *)address << 16;
    unsigned int value = (*(unsigned int *)(record + 4) & 0xF800FFFFU) | bits;
    char *item;
    unsigned int i;

    *(unsigned int *)(record + 4) = value;
    func_0D0278((int *)(record + 0x10), 2);
    item = record + 0xB8;
    for (i = 0; i < 2; ++i) {
        func_13E088(item);
        item += 0x7C;
    }
}
