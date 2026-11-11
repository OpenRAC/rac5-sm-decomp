/* LEVEL_06:0x120E30 -- placement copy of LEVEL_01_12A7D8.c: sets up per-type arrays, runs init callbacks and assigns pooled buffers. */
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
extern struct G *D_001F5990;
extern char *D_001F5A8C;
extern char D_00206EB0[];
extern struct S *func_120AD0(int a);
extern int func_106660(void *a, int b, int c);
extern void func_121788(void *a, char *b);
extern void func_1216E8(void *a, char *b);
extern void func_121260(void *a, void *b);
extern void func_121570(void *a);
extern int func_105D70(int a, int b, char *c, int d);
extern void DelayThread(int n);

int func_120E30(void)
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

    s = func_120AD0(3);
    if (!s)
        return 0;
    if (s->f78 == 1)
        return 1;
    c0 = s->fc0;
    if (!func_106660(c0, 0, 0))
        return 0;
    i = 0;
    p = D_001F5990->f14;
    if (D_001F5990->f18) {
        do {
            func_121788(p, D_001F5A8C + 0x44);
            i++;
            p += 0x18;
        } while (i < D_001F5990->f18);
    }
    i = 0;
    p = D_001F5990->f24;
    if (D_001F5990->f28) {
        do {
            func_1216E8(p, D_001F5A8C + 0x44);
            i++;
            p += 0x18;
        } while (i < D_001F5990->f28);
    }
    i = 0;
    e = D_001F5990->f34;
    if (D_001F5990->f38) {
        do {
            func_121260(e, c0);
            i++;
            DelayThread(0x320);
            e++;
        } while (i < D_001F5990->f38);
    }
    e = D_001F5990->f34;
    end = e + D_001F5990->f38;
    for (; e != end; e++) {
        if (e->f10->f30)
            e->f10->f30(e);
    }
    i = 0;
    it = D_001F5990->f44;
    if (D_001F5990->f48) {
        do {
            func_121570(it);
            if (it->f40 == 0)
                it->f64 &= ~1;
            i++;
            it++;
        } while (i < D_001F5990->f48);
    }
    e2 = D_001F5990->f34;
    end2 = e2 + D_001F5990->f38;
    size = 0;
    for (; e2 != end2; e2++)
        {
            int sz2 = (e2->f10->f1c + 3) & ~3;
            size = (e2->f30 * sz2 + size + 0xF) & ~0xF;
        }
    buf = func_105D70(size, 0, D_00206EB0, 0x308);
    e3 = D_001F5990->f34;
    end3 = e3 + D_001F5990->f38;
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
