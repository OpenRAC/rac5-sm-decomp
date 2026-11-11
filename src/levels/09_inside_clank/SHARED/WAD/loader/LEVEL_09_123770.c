/* LEVEL_09:0x123770 -- placement copy of LEVEL_01_12A7D8.c: sets up per-type arrays, runs init callbacks and assigns pooled buffers. */
struct Item {
    char pad0[0x40];
    int f40;
    char pad44[0x14];
    int f58;
    char pad5c[8];
    int f64;
    char pad68[0x18];
};
struct Type {
    char pad0[0x1C];
    unsigned int f1c;
    char pad20[0x10];
    void (*f30)(void *);
};
struct Ent {
    char pad0[0xC];
    struct Item *fC;
    struct Type *f10;
    char pad14[0x1C];
    int f30;
    char pad34[0x10];
};
struct G {
    char pad0[0x14];
    char *f14;
    unsigned int f18;
    char pad1c[8];
    char *f24;
    unsigned int f28;
    char pad2c[8];
    struct Ent *f34;
    unsigned int f38;
    char pad3c[8];
    struct Item *f44;
    unsigned int f48;
};
struct S {
    char pad0[0x78];
    int f78;
    char pad7c[0x44];
    char fc0[1];
};
extern struct G *D_001F0890;
extern char *D_001F098C;
extern char D_00201C30[];
extern struct S *func_123410(int a);
extern int func_109480(void *a, int b, int c);
extern void func_1240C8(void *a, char *b);
extern void func_124028(void *a, char *b);
extern void func_123BA0(void *a, void *b);
extern void func_123EB0(void *a);
extern int func_108B90(int a, int b, char *c, int d);
extern void DelayThread(int n);

int func_123770(void)
{
    struct S *s;
    void *c0;
    char *p;
    struct Ent *e;
    struct Ent *end;
    struct Ent *e2;
    struct Ent *end2;
    struct Ent *e3;
    struct Ent *end3;
    struct Item *it;
    unsigned int i;
    int size;
    int buf;
    char *bufp;

    s = func_123410(3);
    if (!s)
        return 0;
    if (s->f78 == 1)
        return 1;
    c0 = s->fc0;
    if (!func_109480(c0, 0, 0))
        return 0;
    i = 0;
    p = D_001F0890->f14;
    if (D_001F0890->f18) {
        do {
            func_1240C8(p, D_001F098C + 0x44);
            i++;
            p += 0x18;
        } while (i < D_001F0890->f18);
    }
    i = 0;
    p = D_001F0890->f24;
    if (D_001F0890->f28) {
        do {
            func_124028(p, D_001F098C + 0x44);
            i++;
            p += 0x18;
        } while (i < D_001F0890->f28);
    }
    i = 0;
    e = D_001F0890->f34;
    if (D_001F0890->f38) {
        do {
            func_123BA0(e, c0);
            i++;
            DelayThread(0x320);
            e++;
        } while (i < D_001F0890->f38);
    }
    e = D_001F0890->f34;
    end = e + D_001F0890->f38;
    for (; e != end; e++) {
        if (e->f10->f30)
            e->f10->f30(e);
    }
    i = 0;
    it = D_001F0890->f44;
    if (D_001F0890->f48) {
        do {
            func_123EB0(it);
            if (it->f40 == 0)
                it->f64 &= ~1;
            i++;
            it++;
        } while (i < D_001F0890->f48);
    }
    e2 = D_001F0890->f34;
    end2 = e2 + D_001F0890->f38;
    size = 0;
    for (; e2 != end2; e2++)
        {
            int sz2 = (e2->f10->f1c + 3) & ~3;
            size = (e2->f30 * sz2 + size + 0xF) & ~0xF;
        }
    buf = func_108B90(size, 0, D_00201C30, 0x308);
    e3 = D_001F0890->f34;
    end3 = e3 + D_001F0890->f38;
    for (; e3 != end3; e3++) {
        int sz = (e3->f10->f1c + 3) & ~3;
        struct Item *q;
        struct Item *qe;
        if (sz > 0) {
            q = e3->fC;
            qe = q + e3->f30;
            for (; q != qe; q++) {
                q->f58 = buf;
                buf += sz;
            }
        } else {
            q = e3->fC;
            qe = q + e3->f30;
            for (; q != qe; q++)
                q->f58 = 0;
        }
        buf = (buf + 0xF) & ~0xF;
    }
    s->f78 = 1;
    return 1;
}
