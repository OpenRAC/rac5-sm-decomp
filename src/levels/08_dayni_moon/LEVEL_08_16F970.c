/* LEVEL_08:0x16F970 -- placement copy of LEVEL_01_159040.c: when the object is not the current global object, asks the record's handle whether the named entry exists and sets the 0x200000 flag, then runs the follow-up helper if the flag is set. */
typedef struct Rec {
    int handle;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
    char pad_58[0x64 - 0x58];
    unsigned int flags;
} Obj;

extern Obj *D_002506A4;
extern char *func_01ACA0(void);
extern int func_08C780(int handle, char *name);
extern void func_16F9F8(Obj *o);

void func_16F970(Obj *o)
{
    Rec *rec;

    if (D_002506A4 != o) {
        rec = o->rec;
        if (rec->handle != 0) {
            if (func_08C780(rec->handle, func_01ACA0()) != 0)
                o->flags |= 0x200000;
        }
        if ((o->flags & 0x200000) != 0)
            func_16F9F8(o);
    }
}
