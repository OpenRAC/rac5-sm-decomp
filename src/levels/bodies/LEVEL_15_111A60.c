/* LEVEL_15:0x111A60 -- placement copy of LEVEL_15_101AC8.c: runs a setup helper on a global pool, then calls a per-element helper over the live elements of the pool. */

struct Elem {
    unsigned char pad0[0x118];
};

struct Pool {
    unsigned char pad0[0xC8];
    struct Elem *begin;
    int count;
};

extern unsigned char D_002F0A68[];

void func_0804B0(unsigned char *p);
void func_11D5B0(struct Elem *e);

void func_111A60(void)
{
    struct Pool *p;
    struct Elem *cur;
    struct Elem *end;

    func_0804B0(D_002F0A68);
    p = (struct Pool *)(D_002F0A68 + 0x1C);
    cur = p->begin;
    end = cur + p->count;
    while (cur != end) {
        func_11D5B0(cur);
        cur++;
    }
}
