/* LEVEL_22:0x14E0B0 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00167F18[1];
extern char D_0017D198[];
extern int D_0017D1F8[];

struct Rec *func_14E0B0(void)
{
    struct Rec *record = D_00167F18;

    if (D_00167F18[0].a == 0) {
        if (record != 0) {
            record->a = D_0017D198;
            record->b = D_0017D1F8;
        }
    }
    return D_00167F18;
}
