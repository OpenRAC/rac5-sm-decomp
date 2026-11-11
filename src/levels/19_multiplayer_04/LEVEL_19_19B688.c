/* LEVEL_19:0x19B688 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001C0A60[1];
extern char D_001DA3E0[];
extern int D_001DA4A8[];

struct Rec *func_19B688(void)
{
    struct Rec *record = D_001C0A60;

    if (D_001C0A60[0].a == 0) {
        if (record != 0) {
            record->a = D_001DA3E0;
            record->b = D_001DA4A8;
        }
    }
    return D_001C0A60;
}
