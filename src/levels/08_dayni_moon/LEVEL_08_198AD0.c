/* LEVEL_08:0x198AD0 -- flags the object busy and, unless it is already in state 1, finishes its move: probe, timer reload, finisher and a packed state field. */
typedef struct {
    char pad_00[0x10];
    int w10;
    char pad_14[0x24];
    int w38;
} Rec;

typedef struct {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0x0E];
    Rec *rec;
    char pad_58[0x0C];
    unsigned int flags;
    char pad_68[0x10];
    unsigned int packed;
} Obj;

extern int func_030140(Rec *object, Obj *owner);
extern void func_014850(char *a0, char *a1, int a2);
extern void func_19A1F0(Obj *o);

int func_198AD0(Obj *o)
{
    Rec *rec;

    o->flags |= 0x1000;
    if (o->state == 1) {
        return 1;
    }
    rec = o->rec;
    if (func_030140(rec, o) != 1) {
        return 0;
    }
    if (((int (*)(float, char *, char *, int))func_014850)(1.0f, (char *)o + 0x30, 0, 1) == 0) {
        return 0;
    }
    if (rec->w38 == 0) {
        rec->w38 = rec->w10;
    }
    func_19A1F0(o);
    o->packed = (o->packed & 0xFFF0FFFF) | 0x20000;
    return 1;
}
