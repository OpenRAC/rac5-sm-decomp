/* FRONTEND:0x027918 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001062D0[1];
extern char D_0010A2C8[];
extern int D_0010A318[];

struct Rec *func_027918(void)
{
    struct Rec *record = D_001062D0;

    if (D_001062D0[0].a == 0) {
        if (record != 0) {
            record->a = D_0010A2C8;
            record->b = D_0010A318;
        }
    }
    return D_001062D0;
}
