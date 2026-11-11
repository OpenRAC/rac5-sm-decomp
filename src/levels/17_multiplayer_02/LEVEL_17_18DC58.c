/* LEVEL_17:0x18DC58 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001B2D40[1];
extern char D_001CB570[];
extern int D_001CB608[];

struct Rec *func_18DC58(void)
{
    struct Rec *record = D_001B2D40;

    if (D_001B2D40[0].a == 0) {
        if (record != 0) {
            record->a = D_001CB570;
            record->b = D_001CB608;
        }
    }
    return D_001B2D40;
}
