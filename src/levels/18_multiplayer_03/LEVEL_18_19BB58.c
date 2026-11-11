/* LEVEL_18:0x19BB58 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001C0E40[1];
extern char D_001DA5E8[];
extern int D_001DA668[];

struct Rec *func_19BB58(void)
{
    struct Rec *record = D_001C0E40;

    if (D_001C0E40[0].a == 0) {
        if (record != 0) {
            record->a = D_001DA5E8;
            record->b = D_001DA668;
        }
    }
    return D_001C0E40;
}
