/* LEVEL_03:0x207120 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_002236D8[1];
extern char D_002463D0[];
extern int D_00246488[];

struct Rec *func_207120(void)
{
    struct Rec *record = D_002236D8;

    if (D_002236D8[0].a == 0) {
        if (record != 0) {
            record->a = D_002463D0;
            record->b = D_00246488;
        }
    }
    return D_002236D8;
}
