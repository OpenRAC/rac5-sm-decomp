/* LEVEL_07:0x0EB8C8 -- placement copy of LEVEL_01_0EAAC8.c: merges a looked-up word, shifted into the high half, into a record's second word and forwards the record to a helper. */

struct Rec {
    int w_00;
    int w_04;
    char pad_08[0xA0 - 0x08];
};

extern char D_0021AC18[];
extern int D_002AD6C0[];
void func_1065C0(char *a0, int a1);

void func_0EB8C8(int a0)
{
    unsigned int w;
    struct Rec *r;
    int *tbl;

    tbl = D_002AD6C0;
    r = (struct Rec *)(D_0021AC18 + a0 * 0xA0);
    w = (unsigned int)r->w_04 & 0xF800FFFFU;
    w |= (unsigned int)(tbl[r->w_00] << 16);
    r->w_04 = w;
    func_1065C0((char *)r + 8, 2);
}
