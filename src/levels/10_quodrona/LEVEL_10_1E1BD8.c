/* LEVEL_10:0x1E1BD8 -- runs the check on the object's record and, when it succeeds in state 2 or 4, passes the attached sub-record on; returns the check result. */
typedef struct {
    char pad_00[0x38];
    int w38;
    char *sub;
} Rec;

typedef struct {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0x0E];
    Rec *rec;
} Obj;

extern int func_031848(int a, int b, Obj *o, Rec *rec, int w);
extern void func_119418(int a, int b, char *at);

int func_1E1BD8(int a, int b, Obj *o)
{
    Rec *rec = o->rec;
    int r;

    r = func_031848(a, b, o, rec, rec->w38);
    if (r != 0 && rec->sub != 0 && (o->state == 2 || o->state == 4)) {
        func_119418(a, b, rec->sub + 0x30);
    }
    return r;
}
