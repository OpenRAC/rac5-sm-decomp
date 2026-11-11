/* LEVEL_19:0x19B810 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001C0A98[1];
extern char D_001DA418[];
extern int D_001DA4A8[];

struct Rec *func_19B810(void)
{
    struct Rec *record = D_001C0A98;

    if (D_001C0A98[0].a == 0) {
        if (record != 0) {
            record->a = D_001DA418;
            record->b = D_001DA4A8;
        }
    }
    return D_001C0A98;
}
