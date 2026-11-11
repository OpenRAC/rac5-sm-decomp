/* LEVEL_08:0x1D9E40 -- placement copy of LEVEL_04_1B2FC8.c: packs six small fields into one word and passes it to two helpers. */
extern char D_001D9330[];
void func_09E868(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);
void func_09EA40(void *rec);

void func_1D9E40(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
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
    func_09E868(rec, a1, (unsigned int)D_001D9330, 48, 0, -1, 0);
    func_09EA40(rec);
}
