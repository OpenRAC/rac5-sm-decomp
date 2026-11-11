/* FRONTEND:0x027790 -- placement copy of LEVEL_01_1EEA20.c: lazily fills a two-word global record on first use, keeping the address null check, and returns the record address. */
struct Rec {
    char *a;
    int *b;
};
extern struct Rec D_00106298[1];
extern char D_0010A290[];
extern int D_0010A318[];

struct Rec *func_027790(void)
{
    struct Rec *record = D_00106298;

    if (D_00106298[0].a == 0) {
        if (record != 0) {
            record->a = D_0010A290;
            record->b = D_0010A318;
        }
    }
    return D_00106298;
}
