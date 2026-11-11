/* LEVEL_22:0x131A98 -- classifies a byte from a record (or the global fallback) into a 0/1 result. */
struct Obj6 {
    char pad0[0x45];
    unsigned char b45;
};

extern struct Obj6 *D_001668A4;

int func_131A98(int a0)
{
    int c;
    int r;
    struct Obj6 *g;

    if (a0 != 0) {
        c = ((struct Obj6 *)a0)->b45;
    } else {
        g = D_001668A4;
        if (g == 0) {
            return 1;
        }
        c = g->b45;
    }
    r = 0;
    if (c == 0 || c == 3 || c == 5 || c == 9 || c == 8 || c == 1 || c == 0) {
        r = 1;
    }
    return r;
}
