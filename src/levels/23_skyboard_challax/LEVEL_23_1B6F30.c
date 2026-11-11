extern int D_00269200[];
extern void func_0F7A88(int *, int);
extern void func_1B6718(void *);

void func_1B6F30(char *record)
{
    unsigned int index = *(unsigned int *)record;
    unsigned int address = (unsigned int)D_00269200 + (index << 2);
    unsigned int bits = *(unsigned int *)address << 16;
    unsigned int value = (*(unsigned int *)(record + 4) & 0xF800FFFFU) | bits;
    char *item;
    unsigned int i;

    *(unsigned int *)(record + 4) = value;
    func_0F7A88((int *)(record + 0x10), 2);
    item = record + 0xB8;
    for (i = 0; i < 2; ++i) {
        func_1B6718(item);
        item += 0x7C;
    }
}
