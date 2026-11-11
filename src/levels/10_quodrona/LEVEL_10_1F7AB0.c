/* LEVEL_10:0x1F7AB0 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00213780[1];
extern char D_00234908[];
extern int D_002349C8[];

struct Rec *func_1F7AB0(void)
{
    struct Rec *record = D_00213780;

    if (D_00213780[0].a == 0) {
        if (record != 0) {
            record->a = D_00234908;
            record->b = D_002349C8;
        }
    }
    return D_00213780;
}
