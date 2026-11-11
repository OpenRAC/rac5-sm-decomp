/* LEVEL_04:0x1BC778 -- registers the pending effect set once, then (when the object has a first-slot owner) hooks it up, resets its record to the idle state (timer 35), raises a flag in its model entry and installs the follow-up handler. */
struct Set_1CC228;

typedef struct Outer Outer;
typedef struct Target Target;
typedef void (*Hook)(Target *a0, int a1);

typedef struct {
    char pad_00[4];
    char *ents;
} Model;

typedef struct {
    char pad_00[0x160];
    unsigned int flags160;
} Q;

typedef struct {
    char pad_00[0xC];
    Q *p0C;
} P;

typedef struct {
    char pad_00[4];
    P *p04;
} Ent;

typedef struct {
    char pad_00[0xDC];
    void (*fn)(void);
} Vt;

typedef struct {
    Outer *first;
} Pair;

typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    int w10;
    int w14;
    char pad18[0xC];
    int w24;
    float f28;
} Rec;

struct Target {
    char pad_00[0x40];
    Model *model;
    unsigned char b44;
    char pad_45[3];
    Vt *vt;
    char pad_4C[8];
    Pair *pair;
    Rec *rec;
    char pad_5C[8];
    int f_64;
};

extern unsigned char D_00222454;
extern char D_003B3288[];
extern char D_003B32C0[];
extern char D_002407D8[];
extern Hook D_00240900;
extern void func_1BA218(char *a0, char *a1, struct Set_1CC228 *set);
extern void func_0F6C80(int index);
extern void func_1D4D88(Outer *a0, Target *a1, Hook *a2, int a3);
extern void func_1F0B30(char *object);
extern void func_1BD1E8(void);

int func_1BC778(Target *o)
{
    Outer *first;
    Rec *rec;
    Ent *ent;
    unsigned int off;

    if (D_00222454 == 0) {
        D_00222454 = 1;
        func_1BA218(D_003B3288, D_003B32C0, (struct Set_1CC228 *)D_002407D8);
    }
    func_0F6C80(0);
    first = o->pair->first;
    if (first == 0) {
        return 0;
    }
    func_1D4D88(first, o, &D_00240900, 0);
    rec = o->rec;
    func_1F0B30((char *)rec + 0x18);
    rec->f28 = 35.0f;
    rec->w4 = 0;
    rec->w8 = 0;
    rec->wC = 0;
    rec->w10 = 0;
    rec->w14 = 0;
    rec->w24 = 0;
    rec->w0 = 0;
    off = o->b44 * 0x34;
    off += (int)o->model->ents;
    ent = (Ent *)off;
    ent->p04->p0C->flags160 |= 0x40;
    o->vt->fn = func_1BD1E8;
    return 1;
}
