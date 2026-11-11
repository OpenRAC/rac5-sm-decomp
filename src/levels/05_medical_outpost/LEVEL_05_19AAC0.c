/* LEVEL_05:0x19AAC0 -- sets bit 3 in the flags of the item the object
   refers to, unless its reference is empty. */
typedef struct { char pad[0x8]; unsigned short flags; char pada[0x6]; } Item;
typedef struct { char pad[0x64]; Item *items; } Group;
typedef struct { unsigned short index; char pad2; unsigned char group; } Ref;
typedef struct { char pad[0x58]; Ref *ref; } Obj;
extern Group D_0021B3F8[];

void func_19AAC0(Obj *obj)
{
    Ref *ref = obj->ref;

    if (ref->index != 0xFFFF) {
        Item *item = D_0021B3F8[ref->group].items + ref->index;

        item->flags |= 8;
    }
}
