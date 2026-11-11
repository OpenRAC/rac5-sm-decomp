/* LEVEL_02:0x0F1AA0 -- placement copy of LEVEL_01_0EAAC8.c: merges a looked-up word, shifted into the high half, into a record's second word and forwards the record to a helper. */

struct Rec {
    int w_00;
    int w_04;
    char pad_08[0xA0 - 0x08];
};

extern char D_0021B8D8[];
extern int D_002AF2C0[];
void func_10AD50(char *a0, int a1);

void func_0F1AA0(int a0)
{
    unsigned int w;
    struct Rec *r;
    int *tbl;

    tbl = D_002AF2C0;
    r = (struct Rec *)(D_0021B8D8 + a0 * 0xA0);
    w = (unsigned int)r->w_04 & 0xF800FFFFU;
    w |= (unsigned int)(tbl[r->w_00] << 16);
    r->w_04 = w;
    func_10AD50((char *)r + 8, 2);
}
