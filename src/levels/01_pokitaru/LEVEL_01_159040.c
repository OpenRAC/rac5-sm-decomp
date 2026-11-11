/* LEVEL_01:0x159040 -- when the object is not the current global object, asks the record's handle whether the named entry exists and sets the 0x200000 flag, then runs the follow-up helper if the flag is set. */
typedef struct Rec {
    int handle;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
    char pad_58[0x64 - 0x58];
    unsigned int flags;
} Obj;

extern Obj *D_0020746C;
extern char *func_01A2D0(void);
extern int func_084708(int handle, char *name);
extern void func_1590C8(Obj *o);

void func_159040(Obj *o)
{
    Rec *rec;

    if (D_0020746C != o) {
        rec = o->rec;
        if (rec->handle != 0) {
            if (func_084708(rec->handle, func_01A2D0()) != 0)
                o->flags |= 0x200000;
        }
        if ((o->flags & 0x200000) != 0)
            func_1590C8(o);
    }
}
