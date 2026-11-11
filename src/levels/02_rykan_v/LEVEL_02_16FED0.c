/* LEVEL_02:0x16FED0 -- runs func_16FF90 for the object (and, in state 0 with an idle owner, switches to state 1 and bumps a float of the owner's linked object), then updates the record at +0x58 through func_0EEFF8 and func_0EF780. */
typedef struct {
    char pad00[0x70];
    float f70;
} Linked;

typedef struct {
    Linked *linked;
    char pad04[4];
    unsigned char b08;
} Owner;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Owner *owner;
    char *rec;
} Obj;

extern char D_002354A0[];
extern void func_16FF90(Obj *o);
extern void func_0EEFF8(char *rec, char *table, Obj *o);
extern void func_0EF780(char *record);

void func_16FED0(Obj *o)
{
    char *rec;
    Owner *ow;

    rec = o->rec;
    if (o->state == 0) {
        ow = o->owner;
        func_16FF90(o);
        if (ow->b08 == 0) {
            o->state = 1;
            if (ow->linked != 0)
                ow->linked->f70 = ow->linked->f70 + 1.0f;
        }
    } else if (o->state == 1) {
        func_16FF90(o);
    }
    func_0EEFF8(rec + 0x18, D_002354A0, o);
    func_0EF780(rec + 0x18);
}
