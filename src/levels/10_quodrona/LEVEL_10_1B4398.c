/* LEVEL_10:0x1B4398 -- placement copy of LEVEL_04_1B2FC8.c: packs six small fields into one word and passes it to two helpers. */
extern char D_001B3888[];
void func_096CB8(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_096E90(void *rec);

void func_1B4398(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int rec[4];

    a0 <<= 27;
    a1 <<= 16;
    a0 |= a1;
    a2 <<= 15;
    a4 = (a4 << 10) | 0x1000;
    a0 |= a2;
    a0 |= a4;
    a5 <<= 6;
    a0 |= a5;
    a1 = a0 | 0x19;
    func_096CB8(rec, a1, (unsigned int)D_001B3888, 48, 0, -1, 0);
    func_096E90(rec);
}
