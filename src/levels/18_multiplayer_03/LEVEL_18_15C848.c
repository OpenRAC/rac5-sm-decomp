/* LEVEL_18:0x15C848 -- clears two fields of the linked record of every flagged item in the object's item array. */
typedef struct Rec { char pad00[0x1F0]; int w1F0; char pad1F4[8]; unsigned char b1FC; } Rec;
typedef struct Item { char pad00[0x58]; Rec *f58; char pad5C[8]; unsigned int w64; char pad68[0x18]; } Item;
typedef struct Obj { char pad00[0xC]; Item *items; char pad10[0x20]; int n; } Obj;
void func_15C848(Obj *o)
{
    Item *p;
    Item *end;
    Rec *r;
    end = o->items + o->n;
    p = o->items;
    for (; p != end; p++) {
        if (p->w64 & 1) {
            r = p->f58;
            r->w1F0 = 0;
            r->b1FC = 0;
        }
    }
}
