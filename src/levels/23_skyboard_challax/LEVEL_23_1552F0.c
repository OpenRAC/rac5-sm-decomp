/* LEVEL_23:0x1552F0 -- placement copy of LEVEL_01_159040.c: when the object is not the current global object, asks the record's handle whether the named entry exists and sets the 0x200000 flag, then runs the follow-up helper if the flag is set. */
typedef struct Rec {
    int handle;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
    char pad_58[0x64 - 0x58];
    unsigned int flags;
} Obj;

extern Obj *D_001DAC0C;
extern char *func_018F18(void);
extern int func_07AF58(int handle, char *name);
extern void func_155378(Obj *o);

void func_1552F0(Obj *o)
{
    Rec *rec;

    if (D_001DAC0C != o) {
        rec = o->rec;
        if (rec->handle != 0) {
            if (func_07AF58(rec->handle, func_018F18()) != 0)
                o->flags |= 0x200000;
        }
        if ((o->flags & 0x200000) != 0)
            func_155378(o);
    }
}
