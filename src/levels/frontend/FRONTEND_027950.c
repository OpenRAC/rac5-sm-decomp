/* FRONTEND:0x027950 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001062D8[1];
extern char D_0010A2D0[];
extern int D_0010A318[];

struct Rec *func_027950(void)
{
    struct Rec *record = D_001062D8;

    if (D_001062D8[0].a == 0) {
        if (record != 0) {
            record->a = D_0010A2D0;
            record->b = D_0010A318;
        }
    }
    return D_001062D8;
}
