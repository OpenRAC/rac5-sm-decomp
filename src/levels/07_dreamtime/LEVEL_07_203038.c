/* LEVEL_07:0x203038 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0021F530[1];
extern char D_00240E80[];
extern int D_00240EE8[];

struct Rec *func_203038(void)
{
    struct Rec *record = D_0021F530;

    if (D_0021F530[0].a == 0) {
        if (record != 0) {
            record->a = D_00240E80;
            record->b = D_00240EE8;
        }
    }
    return D_0021F530;
}
