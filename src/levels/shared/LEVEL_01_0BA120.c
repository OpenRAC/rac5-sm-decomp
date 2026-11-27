/* LEVEL_01:0x0BA120 -- appends one entry to a four-slot table when the owner is in the collecting state. */
typedef struct Ent {
    int f0;
    int f4;
    int f8;
    unsigned char fC;
    char padD[3];
    int f10;
    unsigned int f14;
    unsigned int f18;
    unsigned int f1C;
    int f20;
    int f24;
    int f28;
    int f2C;
} Ent;
typedef struct Rec {
    unsigned int v;
    char pad[0x2C];
} Rec;
typedef struct Own {
    char pad0[0x2C];
    Ent *arr;
    int state;
    char pad34[4];
    unsigned int cnt;
    int f3C;
    char pad40[0x6C - 0x40];
    unsigned int f6C;
    unsigned int f70;
} Own;


int func_0BA120(Own *m, int a, int b, int c, unsigned int d, unsigned int e, int f, int g)
{
    Ent *arr;
    Rec *p8;
    Rec *p14;
    Rec *q8;
    Rec *q14;
    if (m->cnt >= 4) return 0;
    if (m->state != 1) return 0;
    arr = m->arr;
    p8 = (Rec *)&arr->f8;
    q8 = p8 + m->cnt;
    q8->v = d == 0xFFFFFFFF ? m->f70 : d;
    p14 = (Rec *)&arr->f14;
    q14 = p14 + m->cnt;
    q14->v = e == 0xFFFFFFFF ? m->f6C : e;
    arr[m->cnt].f10 = c;
    arr[m->cnt].fC = b;
    arr[m->cnt].f0 = a;
    arr[m->cnt].f4 = m->f3C;
    arr[m->cnt].f18 = 0xFFFFFFFF;
    arr[m->cnt].f1C = 0xFFFFFFFF;
    arr[m->cnt].f20 = 0xFF808080;
    arr[m->cnt].f28 = f;
    arr[m->cnt].f2C = g;
    m->cnt = m->cnt + 1;
    return 1;
}
