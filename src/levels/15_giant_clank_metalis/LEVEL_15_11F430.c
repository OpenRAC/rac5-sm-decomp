/* LEVEL_15:0x11F430 -- sets two state fields and releases an owned pointer when set. */
struct R {
    char pad0[0x50];
    void *p50;
    char pad54[0x4c];
    int i_a0;
    int i_a4;
};
extern void func_115C28(void *);

void func_11F430(struct R *r)
{
    r->i_a0 = 4;
    r->i_a4 = 0;
    if (r->p50 != 0) {
        func_115C28(r->p50);
        r->p50 = 0;
    }
}
