/* LEVEL_17:0x02C9C8 -- placement copy of LEVEL_16_02D048.c: queues the resources needed by the current screen, allocates one arena and lays the queued resources out in it; returns 0 when the arena cannot be allocated. */
typedef struct {
    int addr;
    int idx;
} Pair;

typedef struct {
    int addr;
    int idx;
    unsigned char slot;
} Trip;

typedef struct {
    int id;
    int ids[3];
    char pad_10[0x20];
    int size;
    int sizes[3];
} Entry;

typedef struct {
    char pad_00[0x198];
    int sel[2];
    char pad_1A0[0x2D8 - 0x1A0];
    Entry *entries;
} Owner;

typedef struct {
    char pad_00[0x28];
    int chr;
    char pad_2C[0x5F8 - 0x2C];
} Player;

extern int D_001D325C;
extern int D_001D3260;
extern unsigned char D_001D13AC;
extern int D_001C3920;
extern Player *D_001950B8;
extern Owner *D_001D13A8;
extern unsigned char D_001A8288[];
extern Pair D_001D3020[];
extern Trip D_001D3088[];
extern char D_001D2810[];
extern char D_001B5C00[];

extern void func_02CF48(int x, unsigned char y);
extern void *func_0EF9C8(int size, int zero, char *file, int line);
extern void *func_10DE38(char *container, int index);
extern void func_02CEE0(int a0, int a1, int a2, int a3);

int func_02C9C8(void)
{
    unsigned int i;
    unsigned char j;
    unsigned int n;
    int k;
    int pos;
    int x;
    int sel;
    char *buf;
    unsigned int off;
    Pair *p;
    Pair *pend;
    Trip *t;
    Trip *tend;
    Entry *e;
    Entry *f;
    int *szp;
    unsigned int sz;
    unsigned int cap;

    cap = 0x3C0000;
    D_001D325C = 0;
    D_001D3260 = 0;
    if (D_001D13AC != 0) {
        for (i = 0; i < 13; i++) {
            j = 0;
            do {
                func_02CF48(i, j);
                j++;
            } while (j < 3);
        }
    } else if (D_001C3920 == 0x14) {
        for (n = 0; n < 13; n++)
            func_02CF48(n, 0);
    } else {
        for (k = 0; k < 2; k++) {
            pos = k * 0x5F8;
            x = *(int *)((char *)D_001950B8 + pos + 0x28);
            sel = D_001D13A8->sel[k];
            if (x >= 0)
                func_02CF48(x, D_001A8288[sel + x * 2]);
        }
    }
    buf = func_0EF9C8(cap, 6, D_001B5C00, 0x40D);
    if (buf == 0)
        return 0;
    off = 0;
    p = D_001D3020;
    pend = p + D_001D325C;
    for (; p < pend; p++) {
        p->addr = (int)buf + off;
        e = &D_001D13A8->entries[p->idx];
        if (e->size == 0)
            e->size = (int)func_10DE38(D_001D2810, e->id);
        sz = e->size;
        off += (sz + 15) & ~15u;
        if (off > cap) {
            p->addr = 0;
            return 1;
        }
        func_02CEE0(e->id, p->addr, (sz + 0x7FF) & ~0x7FFu, 1);
    }
    t = D_001D3088;
    tend = t + D_001D3260;
    for (; t < tend; t++) {
        t->addr = (int)buf + off;
        f = &D_001D13A8->entries[t->idx];
        szp = &f->sizes[t->slot];
        if (*szp == 0)
            *szp = (int)func_10DE38(D_001D2810, f->ids[t->slot]);
        sz = *szp;
        off += (sz + 15) & ~15u;
        if (off > cap) {
            t->addr = 0;
            break;
        }
        func_02CEE0(f->ids[t->slot], t->addr, (sz + 0x7FF) & ~0x7FFu, 1);
    }
    return 1;
}
