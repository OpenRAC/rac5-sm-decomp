/* LEVEL_24:0x1BF880 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001DB670[1];
extern char D_001F7428[];
extern int D_001F74B8[];

struct Rec *func_1BF880(void)
{
    struct Rec *record = D_001DB670;

    if (D_001DB670[0].a == 0) {
        if (record != 0) {
            record->a = D_001F7428;
            record->b = D_001F74B8;
        }
    }
    return D_001DB670;
}
