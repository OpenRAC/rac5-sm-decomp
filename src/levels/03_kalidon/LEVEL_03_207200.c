/* LEVEL_03:0x207200 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_002236F8[1];
extern char D_002463F0[];
extern int D_00246488[];

struct Rec *func_207200(void)
{
    struct Rec *record = D_002236F8;

    if (D_002236F8[0].a == 0) {
        if (record != 0) {
            record->a = D_002463F0;
            record->b = D_00246488;
        }
    }
    return D_002236F8;
}
