/* LEVEL_02:0x16BD98 -- activates a slot (releasing it first when active), advances its counter and queues the slot when the counter passes the limit. */
typedef struct {
    char pad0[0x18];
    unsigned char flags;
    char pad19;
    unsigned char b1A;
    unsigned char b1B;
} Entry;

typedef struct {
    Entry entries[1];
} Table;

typedef struct {
    char pad0[0x54];
    Entry *p54;
} Obj;

extern void func_16BF78(Obj *o, unsigned char idx);
extern void func_16E5B0(long long first, long long second);

void func_16BD98(Obj *o, unsigned char i, int j)
{
    Entry *base;
    Entry *e;
    unsigned char *cnt;
    unsigned char *c;

    base = o->p54;
    e = base + i;
    if (e->flags & 1) {
        func_16BF78(o, i);
    }
    e->b1B = (unsigned char)j;
    e->flags = e->flags | 1;
    cnt = (unsigned char *)base + 0x10A;
    c = cnt + j;
    *c = *c + 1;
    if (!(((unsigned char *)base)[0x109] < *c)) {
        e->b1A = 0;
        e->flags = e->flags | 2;
        func_16E5B0((long long)(int)base, (long long)j);
    }
}
