/* LEVEL_10:0x174150 -- resets a field, stores a subobject pointer and calls a virtual method through its table. */
typedef struct VT { char pad[0x18]; short off; short pad2; void (*fn)(char *, char *); } VT;
typedef struct Item { VT *vt; } Item;
typedef struct Obj { char pad[0x44]; int f44; Item *f48; Item *f4c; } Obj;
void func_174150(Obj *o)
{
    Item *item;
    o->f44 = 0;
    item = o->f4c;
    o->f48 = item;
    item->vt->fn((char *)item + item->vt->off, (char *)o);
}
