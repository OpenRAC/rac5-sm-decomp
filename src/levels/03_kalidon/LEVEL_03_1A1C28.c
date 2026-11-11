/* LEVEL_03:0x1A1C28 -- finds the first listed object of a matching type and spawns an effect at its offset position. */
typedef struct { float x, y, z, w; } Vec;
typedef struct { char pad[0x45]; unsigned char type; } Item;
typedef struct { char pad[0x9D]; unsigned char found; char pad2; unsigned char sel; char pad3[0xE0 - 0xA0]; Item *l1[6]; Item *l2[6]; } Holder;
typedef struct { char pad[0x54]; Holder *h; } Obj;
extern Vec D_0023F788[];
extern Vec D_0023F7A8[];
extern void func_1A5B30(Item *it, Vec *v);

void func_1A1C28(Obj *obj)
{
    Holder *h = obj->h;
    unsigned int i = 0;
    Item **q = h->l2;
    Item **p = h->l1;
    Vec v;
    Vec *a;
    Vec *b;

    if (h->sel) {
        p = q;
    }

    do {
        unsigned char t = (*p)->type;
        if (t == 3 || t == 4 || t == 10) {
            a = &D_0023F788[h->sel];
            b = &D_0023F7A8[h->sel];
            v.x = a->x + b->x * 5.0f;
            v.y = a->y + b->y * 5.0f;
            v.z = a->z + b->z * 5.0f;
            func_1A5B30(*p, &v);
            h->found = i;
            return;
        }
        i++;
        p++;
    } while (i < 6);
    h->found = 0xFF;
}
