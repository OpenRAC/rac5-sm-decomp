/* LEVEL_15:0x1438A0 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_0015F218[1];
extern char D_001736A8[];
extern int D_00173738[];

struct Rec *func_1438A0(void)
{
    struct Rec *record = D_0015F218;

    if (D_0015F218[0].a == 0) {
        if (record != 0) {
            record->a = D_001736A8;
            record->b = D_00173738;
        }
    }
    return D_0015F218;
}
