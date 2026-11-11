/* LEVEL_02:0x1B79C8 -- finds the slot index of a looked-up pointer in a 7-entry table; returns 1 when a slot matched. */

typedef struct Obj Obj;

struct Obj {
    char pad0[0x10];
    void *p10;
    char pad1[0x40];
    void *p54;
    char pad2[0x8];
    Obj *p60;
    char pad3[0x5];
    unsigned char b69;
};

struct Holder {
    char pad[0x54];
    Obj *obj;
};

void *func_1D9570(void *a);
int func_08B060(void *a, void *b);

static __inline__ int FindSlot(Obj *m, void *key)
{
    void **q;
    unsigned int i;

    q = (void **)m->p54;
    i = 0;
    do {
        if (*q == key) {
            return i;
        }
        i++;
        q += 4;
    } while (i < 7);
    return 0xFF;
}

int func_1B79C8(struct Holder *h)
{
    unsigned int k;
    Obj *o;
    void *s1;

    o = h->obj;
    o->b69 = 0xFF;
    k = 0;
    do {
        s1 = func_1D9570(o->p60);
        if (func_08B060(o->p10, (char *)s1 + 0x30) != 0) {
            o->b69 = FindSlot(o->p60, s1);
            break;
        }
        k++;
    } while (k < 7);
    return o->b69 != 0xFF;
}
