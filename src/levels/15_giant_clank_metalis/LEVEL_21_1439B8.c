/* LEVEL_21:0x1439B8 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0015F240[1];
extern char D_001736D0[];
extern int D_00173738[];

struct Rec *func_1439B8(void)
{
    struct Rec *record = D_0015F240;

    if (D_0015F240[0].a == 0) {
        if (record != 0) {
            record->a = D_001736D0;
            record->b = D_00173738;
        }
    }
    return D_0015F240;
}
