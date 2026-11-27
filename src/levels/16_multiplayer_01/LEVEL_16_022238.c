/* LEVEL_16:0x022238 -- guarded accumulate on a record field, then optional follow-up call. */
struct Rec {
    char pad_00[0x44];
    unsigned int c_44;
};

struct Q {
    char pad_00[0x20];
    unsigned int v_20;
};

extern long long func_0221C8(void *o, void *x);
extern struct Rec *func_0220C8(void *o, void *x);
extern int func_022C28(unsigned int mode, int field);
extern struct Q *func_022170(void *o, void *x, int n);
extern void func_021F10(void *first, void *second);

int func_022238(void *a0, unsigned int a1, void *a2)
{
    struct Rec *r;
    struct Q *q;
    unsigned int qv;
    unsigned int t;

    if (func_0221C8(a0, a2) == 0) {
        return 0;
    }
    r = func_0220C8(a0, a2);
    q = func_022170(a0, (void *)func_022C28((unsigned int)a0, (int)a2), -1);
    qv = q->v_20;
    t = r->c_44 + a1;
    r->c_44 = t;
    if (qv < t) {
        r->c_44 = t - qv;
        func_021F10(a0, a2);
        return 1;
    }
    return 0;
}
