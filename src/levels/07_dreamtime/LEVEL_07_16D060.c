/* LEVEL_07:0x16D060 -- advances the object's two-step state (0 -> 1 -> back to 0 on failure), flagging a global when the world byte is 4. */
typedef struct {
    char pad00[0x1D];
    unsigned char b1D;
} Rec;

typedef struct Obj Obj;

struct Obj {
    char pad00[0x46];
    unsigned char state;
    char pad47[0xD];
    Rec *rec;
    char pad58[0xC];
    unsigned int flags;
};

typedef struct {
    char pad00[0x10512];
    unsigned char world;
} World;

extern World *D_002082AC;
extern unsigned char D_0021BB9D;

extern int func_16D1F0(Obj *a0);
extern void func_16D118(Obj *o);

void func_16D060(Obj *o)
{
    Rec *rec = o->rec;

    if (D_002082AC->world == 4) {
        D_0021BB9D = 1;
    }
    if (o->state == 0) {
        if (func_16D1F0(o) != 0) {
            func_16D118(o);
            if (rec->b1D != 0) {
                o->flags = o->flags | 0x10;
            }
            o->state = 1;
        }
    }
    if (o->state == 1) {
        if (func_16D1F0(o) == 0) {
            o->state = 0;
        }
    }
}
