/* LEVEL_22:0x14DEB8 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00167ED0[1];
extern char D_0017D150[];
extern int D_0017D1F8[];

struct Rec *func_14DEB8(void)
{
    struct Rec *record = D_00167ED0;

    if (D_00167ED0[0].a == 0) {
        if (record != 0) {
            record->a = D_0017D150;
            record->b = D_0017D1F8;
        }
    }
    return D_00167ED0;
}
