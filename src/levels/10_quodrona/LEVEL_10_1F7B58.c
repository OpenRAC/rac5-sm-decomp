/* LEVEL_10:0x1F7B58 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00213798[1];
extern char D_00234920[];
extern int D_002349C8[];

struct Rec *func_1F7B58(void)
{
    struct Rec *record = D_00213798;

    if (D_00213798[0].a == 0) {
        if (record != 0) {
            record->a = D_00234920;
            record->b = D_002349C8;
        }
    }
    return D_00213798;
}
