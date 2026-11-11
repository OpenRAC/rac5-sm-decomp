/* FRONTEND:0x0278A8 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_001062C0[1];
extern char D_0010A2B8[];
extern int D_0010A318[];

struct Rec *func_0278A8(void)
{
    struct Rec *record = D_001062C0;

    if (D_001062C0[0].a == 0) {
        if (record != 0) {
            record->a = D_0010A2B8;
            record->b = D_0010A318;
        }
    }
    return D_001062C0;
}
