/* LEVEL_03:0x2070E8 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_002236D0[1];
extern char D_002463C8[];
extern int D_00246488[];

struct Rec *func_2070E8(void)
{
    struct Rec *record = D_002236D0;

    if (D_002236D0[0].a == 0) {
        if (record != 0) {
            record->a = D_002463C8;
            record->b = D_00246488;
        }
    }
    return D_002236D0;
}
