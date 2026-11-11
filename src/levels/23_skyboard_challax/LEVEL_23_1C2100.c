/* LEVEL_23:0x1C2100 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001DDAC0[1];
extern char D_001F8A20[];
extern int D_001F8A88[];

struct Rec *func_1C2100(void)
{
    struct Rec *record = D_001DDAC0;

    if (D_001DDAC0[0].a == 0) {
        if (record != 0) {
            record->a = D_001F8A20;
            record->b = D_001F8A88;
        }
    }
    return D_001DDAC0;
}
