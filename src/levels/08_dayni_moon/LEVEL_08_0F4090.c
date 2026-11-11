/* LEVEL_08:0x0F4090 -- placement copy of LEVEL_01_0E9620.c: spawns a batch of objects around a source. */
typedef struct {
    float x, y, z;
} V3_t;

typedef struct {
    char pad0[0x34];
    unsigned int count;
} Def_t;

typedef struct {
    char pad0[0x30];
    V3_t pos;
} Src_t;

typedef struct {
    char pad0[0xC];
    Def_t *def;
    Src_t *src;
    char pad1[0x25 - 0x14];
    unsigned char kind;
} Sub_t;

typedef struct {
    void (*cb)(void);
    char pad0[0xC - 4];
    V3_t pos;
    char pad1[0x30 - 0x18];
    Sub_t sub;
} Spawn_t;

typedef struct {
    char pad0[0x80];
    unsigned short id;
} Tbl_t;

extern Tbl_t D_002E7040;
extern Spawn_t *func_09BAE8(int a, int b, int c, int d, int e);
extern void func_0F42E8(Spawn_t *s);
extern void func_0F41A8(void);

int func_0F4090(Spawn_t **out, Def_t *def, Src_t *src, int kind, int flag)
{
    unsigned int n;
    Spawn_t *s;
    Spawn_t **p;
    V3_t *sp;
    V3_t *dp;
    Sub_t *q;

    n = 0;
    p = out;
    sp = &src->pos;
    while (n < def->count) {
        s = func_09BAE8(2, 3, D_002E7040.id, 1, 1);
        if (s == 0)
            break;
        if (flag)
            s->cb = 0;
        else
            s->cb = func_0F41A8;
        dp = &s->pos;
        q = &s->sub;
        dp->x = src->pos.x;
        dp->y = sp->y;
        dp->z = sp->z;
        q->def = def;
        q->src = src;
        q->kind = kind;
        func_0F42E8(s);
        if (out != 0)
            *p = s;
        p++;
        n++;
    }
    return n;
}
