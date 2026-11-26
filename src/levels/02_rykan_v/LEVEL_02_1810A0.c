/* LEVEL_02:0x1810A0 -- placement copy of LEVEL_01_16CE68.c: proximity light: tracks whether the hero is inside either trigger volume, switches between fading in and out after a short delay, steps the fade and tints all attached parts. */
typedef struct {
    char pad_00[0x68];
    unsigned int tint_68;
} Part;

typedef struct {
    Part *part_00;
    char pad_04[0x18];
} Slot;

typedef struct {
    Slot slots_000[12];
    char pad_150[0xB];
    unsigned char delay_15B;
} Node;

typedef struct {
    void *a;
    void *b;
} Links;

typedef struct {
    char pad_00[0x45];
    unsigned char state_45;
    char pad_46[0xE];
    Links *links_54;
    Node *node_58;
    char pad_5C[0x14];
    float fade_70;
} Obj;

extern char D_0024C650[];
extern int func_08B060(void *a, float *p);
extern void func_1832A0(Obj *o);
extern void func_183240(Obj *o);
extern void func_1831D8(Node *n, int a, int b);

void func_1810A0(Obj *o)
{
    Links *l;
    Node *n;
    Slot *s;
    Slot *end;
    float *pos;
    char *g;
    int in;
    unsigned int c;

    l = o->links_54;
    n = o->node_58;
    if (l->a == 0) {
        return;
    }
    g = D_0024C650;
    pos = (float *)(g + 0x30);
    in = func_08B060(l->a, pos);
    if (in == 0 && l->b != 0) {
        in = func_08B060(l->b, pos);
    }
    if (o->state_45 == 0) {
        if (in != 0) {
            func_1832A0(o);
        } else {
            func_183240(o);
        }
        return;
    }
    if (in != 0) {
        if (o->state_45 == 2 || o->state_45 == 4) {
            if (++n->delay_15B >= 30) {
                o->state_45 = 3;
                func_1831D8(n, 0, 1);
                n->delay_15B = 0;
            }
        } else {
            n->delay_15B = 0;
        }
    } else {
        if (o->state_45 == 1 || o->state_45 == 3) {
            if (++n->delay_15B >= 30) {
                o->state_45 = 4;
                func_1831D8(n, 0, 1);
                n->delay_15B = 0;
            }
        } else {
            n->delay_15B = 0;
        }
    }
    if (o->state_45 == 3) {
        o->fade_70 = o->fade_70 + 8.5f;
        if (o->fade_70 >= 255.0f) {
            func_1832A0(o);
        }
    } else if (o->state_45 == 4) {
        o->fade_70 = o->fade_70 - 8.5f;
        if (o->fade_70 <= 0.0f) {
            func_183240(o);
        }
    }
    if ((unsigned int)(o->state_45 - 3) < 2) {
        c = ((int)(o->fade_70 + 0.5f) << 24) | 0xFFFFFF;
        s = n->slots_000;
        end = s + 12;
        do {
            if (s->part_00 != 0) {
                s->part_00->tint_68 = c;
            }
            s++;
        } while (s < end);
    }
}
