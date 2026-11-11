/* LEVEL_09:0x1A0148 -- two helper checks on a child record, returns whether the results agree with zero. */
struct P1A0148 {
    char pad0[0x54];
    struct Q1A0148 *f54;
};

struct Q1A0148 {
    char pad0[0x34];
    void *f34;
    void *f38;
};

extern char *func_019740(void);
extern int func_0810E8(void *a, int b);

int func_1A0148(struct P1A0148 *p)
{
    struct Q1A0148 *q;
    char *b;
    int c;

    q = p->f54;
    b = func_019740();
    if (func_0810E8(q->f34, (int)b) != 0) {
        if (q->f38 != 0) {
            b = func_019740();
            c = func_0810E8(q->f38, (int)b);
            if (c != 0) {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
