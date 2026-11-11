/* LEVEL_03:0x1569D0 -- placement copy of LEVEL_01_159040.c: when the object is not the current global object, asks the record's handle whether the named entry exists and sets the 0x200000 flag, then runs the follow-up helper if the flag is set. */
typedef struct Rec {
    int handle;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
    char pad_58[0x64 - 0x58];
    unsigned int flags;
} Obj;

extern Obj *D_0021FAF4;
extern char *func_01A0E0(void);
extern int func_084588(int handle, char *name);
extern void func_156A58(Obj *o);

void func_1569D0(Obj *o)
{
    Rec *rec;

    if (D_0021FAF4 != o) {
        rec = o->rec;
        if (rec->handle != 0) {
            if (func_084588(rec->handle, func_01A0E0()) != 0)
                o->flags |= 0x200000;
        }
        if ((o->flags & 0x200000) != 0)
            func_156A58(o);
    }
}
