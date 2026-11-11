/* LEVEL_05:0x18CAE0 -- converts the record's stored offsets into pointers (the last field and two list entries only when their target is valid), clears a flag in six targets, flags and notifies the two list targets through their type table, and registers the final target; returns 1, or 0 when a conversion fails. */
typedef struct Target Target;

typedef struct {
    char pad00[0x28];
    void (*notify)(Target *t);
} VTbl;

typedef struct {
    char pad00[0x10];
    VTbl *vt;
} Type;

struct Target {
    char pad00[0x40];
    Type *type;
    char pad44[0x1D];
    unsigned char b61;
    char pad62[2];
    unsigned int flags;
};

typedef struct {
    Target *w[6];
    Target *list[2];
    Target *f20;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    char pad58[0xC];
    unsigned int flags;
} Obj;

extern int D_001F5E14;
extern void func_18CD40(void);
extern void func_1632D0(char *object, char *member, int value);

int func_18CAE0(Obj *o)
{
    Rec *rec = o->rec;
    Target *t;
    Target *u;
    Target *t2;
    unsigned int i;
    unsigned int j;
    int v;
    int w;
    int x;
    int ok;
    int ok2;
    int ok3;

    v = (int)rec->f20;
    if (v == 0) {
        ok = 0;
    } else {
        t = (Target *)(D_001F5E14 + v);
        if (*(int *)((char *)t + 0x40) == 0) {
            rec->f20 = 0;
            ok = 0;
        } else {
            rec->f20 = t;
            ok = 1;
        }
    }
    if (!ok) {
        return 0;
    }
    i = 0;
    do {
        w = (int)rec->w[i];
        if (w == 0) {
            ok2 = 0;
        } else {
            rec->w[i] = (Target *)(D_001F5E14 + w);
            ok2 = 1;
        }
        if (!ok2) {
            return 0;
        }
        rec->w[i]->b61 = rec->w[i]->b61 & 0xFE;
        i++;
    } while (i < 6);
    j = 0;
    do {
        x = (int)rec->list[j];
        if (x == 0) {
            ok3 = 0;
        } else {
            t2 = (Target *)(D_001F5E14 + x);
            if (*(int *)((char *)t2 + 0x40) == 0) {
                rec->list[j] = 0;
                ok3 = 0;
            } else {
                rec->list[j] = t2;
                ok3 = 1;
            }
        }
        if (!ok3) {
            return 0;
        }
        u = rec->list[j];
        u->flags = u->flags | 0x430;
        if (u->type->vt->notify != 0) {
            u->type->vt->notify(u);
        }
        j++;
    } while (j < 2);
    o->flags = o->flags | 0x10;
    func_1632D0((char *)rec->f20, (char *)o, (int)func_18CD40);
    return 1;
}
