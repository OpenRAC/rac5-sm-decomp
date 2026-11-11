/* LEVEL_15:0x115220 -- builds three packed words for entry i and stores the processed results. */
struct Entry {
    int f00;
    int f04;
    unsigned int f08;
    int f0C;
    unsigned int f10;
    int f14;
    unsigned int f18;
};

struct Out {
    int a;
    int b;
    int c;
};

extern void func_114180(int);
extern int func_12BFB0(unsigned int);
extern int func_12E158(unsigned int);
extern int func_0CE3E0(unsigned int);

extern struct Entry D_001706E0[];
extern struct Out D_002F2998[];
extern int D_001AFE00[];

void func_115220(int i)
{
    struct Entry *e;
    struct Out *o;
    int t0, t1, t2;
    unsigned int x;
    unsigned int y;
    unsigned int z;

    e = &D_001706E0[i];
    o = &D_002F2998[i];
    func_114180(e->f00);
    t0 = D_001AFE00[e->f04];
    t1 = D_001AFE00[e->f0C];
    t2 = D_001AFE00[e->f14];
    x = (e->f08 & 0xF800FFFF) | (t0 << 16);
    y = (e->f10 & 0xF800FFFF) | (t1 << 16);
    z = (e->f18 & 0xF800FFFF) | (t2 << 16);
    o->a = func_12BFB0(x);
    o->b = func_12E158(y);
    o->c = func_0CE3E0(z);
}
