/* LEVEL_23:0x1C2090 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001DDAB0[1];
extern char D_001F8A10[];
extern int D_001F8A88[];

struct Rec *func_1C2090(void)
{
    struct Rec *record = D_001DDAB0;

    if (D_001DDAB0[0].a == 0) {
        if (record != 0) {
            record->a = D_001F8A10;
            record->b = D_001F8A88;
        }
    }
    return D_001DDAB0;
}
