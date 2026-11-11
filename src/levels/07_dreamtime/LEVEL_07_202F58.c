/* LEVEL_07:0x202F58 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0021F510[1];
extern char D_00240E60[];
extern int D_00240EE8[];

struct Rec *func_202F58(void)
{
    struct Rec *record = D_0021F510;

    if (D_0021F510[0].a == 0) {
        if (record != 0) {
            record->a = D_00240E60;
            record->b = D_00240EE8;
        }
    }
    return D_0021F510;
}
