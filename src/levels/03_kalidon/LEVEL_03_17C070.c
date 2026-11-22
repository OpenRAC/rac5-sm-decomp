/* LEVEL_03:0x17C070 -- placement copy of LEVEL_02_191B78.c: sets up a projectile: scales its timer and squares its radius into the record, rebases the link offset, registers it with the world and picks the colour from a flag. */
typedef struct {
    char pad_00[0x14];
    unsigned short count;
} Link;

typedef struct {
    Link *link;
    char pad_04[0x0C];
    float timer;
    char pad_14[4];
    float radius;
    char pad_1C;
    unsigned char hot;
    unsigned char age;
} Rec;

typedef struct {
    int w00;
    char pad_04[10];
    unsigned char b0E;
    unsigned char b0F;
    int w10;
    int w14;
    float f18;
} Sub;

typedef struct {
    char pad_00[0x30];
    char pos[0x14];
    char pad_44[2];
    unsigned char b46;
    char pad_47[0x0D];
    Rec *rec;
    Sub *sub;
    char pad_5C[0x10];
    unsigned int color;
    char pad_70[6];
    unsigned char b76;
    unsigned char b77;
} Obj;

typedef struct Pool Pool;

extern int D_00220370;
extern int D_0021F414;
extern Pool D_0024A578;
extern int func_1282D0(unsigned int value);
extern void func_0951A0(Pool *pool, Sub *sub, char *a, char *b, unsigned int flags);

static __inline__ int Rebase(int *p)
{
    int ok;

    if (*p == 0) {
        ok = 0;
    } else {
        *p = D_0021F414 + *p;
        ok = 1;
    }
    return ok;
}

int func_17C070(Obj *o)
{
    Rec *rec = o->rec;
    Sub *sub = o->sub;

    if (D_00220370 == 0) {
        D_00220370 = func_1282D0(0x8de63d54u);
    }
    rec->timer = rec->timer * 0.033333335f;
    sub->f18 = rec->radius * rec->radius;
    if (Rebase((int *)&rec->link) && rec->link->count <= rec->age) {
        rec->age = 0;
    }
    sub->w10 = (int)o;
    sub->w14 = 0;
    sub->w00 = 0;
    sub->b0F = 0;
    sub->b0E = 5;
    func_0951A0(&D_0024A578, sub, o->pos, o->pos, 0x1410);
    o->b76 = 0x40;
    o->b77 = 0x80;
    o->b46 = 0;
    if (rec->hot != 0) {
        o->color = 0xFF00FFFF;
    } else {
        o->color = 0xFF00FF00;
    }
    return 1;
}
