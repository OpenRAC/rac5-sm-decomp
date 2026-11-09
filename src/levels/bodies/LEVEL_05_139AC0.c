/* LEVEL_05:0x139AC0 -- placement copy of LEVEL_01_13E158.c: picks a default 2-float value for the record, then scans the active list for an entry whose hit test passes and copies its pair. */

typedef struct {
    float x;
    float y;
} Vec2;

typedef struct {
    float x;
    float y;
    void *p_08;
    void *p_0C;
} Hit;

typedef struct {
    char pad_00[0x54];
    Hit *hit_54;
    char pad_58[0xC];
    unsigned int flags_64;
    char pad_68[0x18];
} Elem;

typedef struct {
    char pad_00[0xC];
    Elem *base_0C;
    char pad_10[0x20];
    int count_30;
} Cont;

typedef struct {
    char pad_00[0xD8];
    Vec2 pos_D8;
} Rec;

typedef struct {
    char pad_00[0x30];
    float pos_30[3];
    char pad_3C[0x1C];
    Rec *rec_58;
} Obj;

extern Vec2 D_0020A278;
extern Vec2 D_0020A280;
extern Cont *D_001F6190;
extern int func_135BF0(Obj *o);
extern int func_082088(void *a, float *p);
extern int func_1B55F8(void *a, float *p);

int func_139AC0(Obj *o)
{
    Rec *r;
    Cont *cn;
    Elem *e;
    Elem *end;
    Hit *h;
    void *a;
    void *b;
    float *p;

    r = o->rec_58;
    if (func_135BF0(o) != 0) {
        r->pos_D8 = D_0020A280;
    } else {
        r->pos_D8 = D_0020A278;
    }
    cn = D_001F6190;
    if (cn == 0) {
        return 0;
    }
    p = o->pos_30;
    end = cn->base_0C + cn->count_30;
    for (e = cn->base_0C; e != end; e++) {
        if (e->flags_64 & 1) {
            h = e->hit_54;
            a = h->p_08;
            b = h->p_0C;
            if ((a != 0 && func_082088(a, p) != 0) || (b != 0 && func_1B55F8(b, p) != 0)) {
                r->pos_D8.x = h->x;
                r->pos_D8.y = h->y;
                return 1;
            }
        }
    }
    return 0;
}
