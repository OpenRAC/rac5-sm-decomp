/* LEVEL_23:0x1C1E60 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001DDA60[1];
extern char D_001F89C0[];
extern int D_001F8A88[];

struct Rec *func_1C1E60(void)
{
    struct Rec *record = D_001DDA60;

    if (D_001DDA60[0].a == 0) {
        if (record != 0) {
            record->a = D_001F89C0;
            record->b = D_001F8A88;
        }
    }
    return D_001DDA60;
}
