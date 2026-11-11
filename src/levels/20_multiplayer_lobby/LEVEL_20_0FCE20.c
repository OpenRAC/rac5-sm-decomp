/* LEVEL_20:0x0FCE20 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00120A98[1];
extern char D_00131C00[];
extern int D_00131C78[];

struct Rec *func_0FCE20(void)
{
    struct Rec *record = D_00120A98;

    if (D_00120A98[0].a == 0) {
        if (record != 0) {
            record->a = D_00131C00;
            record->b = D_00131C78;
        }
    }
    return D_00120A98;
}
