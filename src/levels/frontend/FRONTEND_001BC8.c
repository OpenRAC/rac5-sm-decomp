/* FRONTEND:0x001BC8 -- moves a pending value into the primary slot when it differs, after a helper call. */
typedef struct {
    int f_00;
    int f_04;
} Pair;

extern Pair D_0010B9D0;
extern void func_001D58(void);
extern void func_001C28(void);

void func_001BC8(void)
{
    Pair *p;
    int v;

    p = &D_0010B9D0;
    if (p->f_04 != 0) {
        if (p->f_04 == D_0010B9D0.f_00) {
            p->f_04 = 0;
        } else {
            func_001D58();
            v = p->f_04;
            p->f_04 = 0;
            D_0010B9D0.f_00 = v;
            func_001C28();
        }
    }
}
