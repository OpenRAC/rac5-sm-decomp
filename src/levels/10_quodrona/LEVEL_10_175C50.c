/* LEVEL_10:0x175C50 -- calls a lookup for each of twelve table words and marks each returned record with two float fields. */

struct R175C50 {
    char pad00[0x18];
    float f18;
    float f1C;
};

extern char D_0022A5C0[];
extern struct R175C50 *func_127EC8(void *a);

void func_175C50(void)
{
    unsigned int i;
    void **arr;
    struct R175C50 *r;
    float hi;
    float lo;

    hi = 100.0f;
    lo = 150.0f;
    arr = (void **)D_0022A5C0;
    for (i = 0; i < 12; i++) {
        r = func_127EC8(arr[i]);
        if (r != 0) {
            r->f18 = hi;
            r->f1C = lo;
        }
    }
}
