/* LEVEL_16:0x19A680 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001BF878[1];
extern char D_001DA270[];
extern int D_001DA2F8[];

struct Rec *func_19A680(void)
{
    struct Rec *record = D_001BF878;

    if (D_001BF878[0].a == 0) {
        if (record != 0) {
            record->a = D_001DA270;
            record->b = D_001DA2F8;
        }
    }
    return D_001BF878;
}
