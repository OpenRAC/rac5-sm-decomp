/* LEVEL_18:0x19B960 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001C0DF8[1];
extern char D_001DA5A0[];
extern int D_001DA668[];

struct Rec *func_19B960(void)
{
    struct Rec *record = D_001C0DF8;

    if (D_001C0DF8[0].a == 0) {
        if (record != 0) {
            record->a = D_001DA5A0;
            record->b = D_001DA668;
        }
    }
    return D_001C0DF8;
}
