/* LEVEL_22:0x14DF98 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00167EF0[1];
extern char D_0017D170[];
extern int D_0017D1F8[];

struct Rec *func_14DF98(void)
{
    struct Rec *record = D_00167EF0;

    if (D_00167EF0[0].a == 0) {
        if (record != 0) {
            record->a = D_0017D170;
            record->b = D_0017D1F8;
        }
    }
    return D_00167EF0;
}
