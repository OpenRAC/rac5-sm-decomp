/* LEVEL_04:0x1B2FC8 -- packs six small fields into one word and passes it to two helpers. */
extern char D_001B24B8[];
void func_099A40(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_099C18(void *rec);

void func_1B2FC8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
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
    func_099A40(rec, a1, (unsigned int)D_001B24B8, 48, 0, -1, 0);
    func_099C18(rec);
}
