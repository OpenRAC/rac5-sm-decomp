/* LEVEL_05:0x1DDFD8 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001F97A8[1];
extern char D_00217280[];
extern int D_00217308[];

struct Rec *func_1DDFD8(void)
{
    struct Rec *record = D_001F97A8;

    if (D_001F97A8[0].a == 0) {
        if (record != 0) {
            record->a = D_00217280;
            record->b = D_00217308;
        }
    }
    return D_001F97A8;
}
