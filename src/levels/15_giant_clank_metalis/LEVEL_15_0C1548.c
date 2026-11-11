/* LEVEL_15:0x0C1548 -- placement copy of LEVEL_01_0EAAC8.c: merges a looked-up word, shifted into the high half, into a record's second word and forwards the record to a helper. */

struct Rec {
    int w_00;
    int w_04;
    char pad_08[0xA0 - 0x08];
};

extern char D_0015B598[];
extern int D_001AFE00[];
void func_0D0278(char *a0, int a1);

void func_0C1548(int a0)
{
    unsigned int w;
    struct Rec *r;
    int *tbl;

    tbl = D_001AFE00;
    r = (struct Rec *)(D_0015B598 + a0 * 0xA0);
    w = (unsigned int)r->w_04 & 0xF800FFFFU;
    w |= (unsigned int)(tbl[r->w_00] << 16);
    r->w_04 = w;
    func_0D0278((char *)r + 8, 2);
}
