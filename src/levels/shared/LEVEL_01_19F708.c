/* LEVEL_01:0x19F708 -- sets bit 0x40 in the flags of the record reached through the indexed entry. */
typedef struct Target { char pad_00[0x68]; unsigned int flags; } Target;
typedef struct Inner { char pad_00[0xC]; Target *target; } Inner;
typedef struct Entry { char pad_00[4]; Inner *inner; char pad_08[0x2C]; } Entry;
typedef struct List { char pad_00[4]; Entry *entries; } List;
typedef struct Obj { char pad_00[0x40]; List *list; unsigned char index; } Obj;

int func_19F708(Obj *o)
{
    Target *target = o->list->entries[o->index].inner->target;
    target->flags |= 0x40;
    return 1;
}
