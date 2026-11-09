/* LEVEL_19:0x021E78 -- placement copy of LEVEL_16_022238.c: guarded accumulate on a record field, then optional follow-up call. */
struct Rec {
    char pad_00[0x44];
    unsigned int c_44;
};

struct Q {
    char pad_00[0x20];
    unsigned int v_20;
};

extern int func_021E08(void *o, void *x);
extern struct Rec *func_021D08(void *o, void *x);
extern void *func_022868(void *o, void *x);
extern struct Q *func_021DB0(void *o, void *x, int n);
extern void func_021B50(long long first, long long second);

int func_021E78(void *a0, unsigned int a1, void *a2)
{
    struct Rec *r;
    struct Q *q;
    unsigned int qv;
    unsigned int t;

    if (func_021E08(a0, a2) == 0) {
        return 0;
    }
    r = func_021D08(a0, a2);
    q = func_021DB0(a0, func_022868(a0, a2), -1);
    qv = q->v_20;
    t = r->c_44 + a1;
    r->c_44 = t;
    if (qv < t) {
        r->c_44 = t - qv;
        func_021B50((long long)a0, (long long)a2);
        return 1;
    }
    return 0;
}
