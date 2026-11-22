/* USA LEVEL_17.REL:0x1700B0, 328-byte candidate (21 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Class {
    char pad_00[0x20];
    void (*hook_20)(float f, void *owner, int a, int b, void *pos, void *vel, void *o);
} Class;

typedef struct Owner {
    char pad_00[0x40];
    Class *cls_40;
    char pad_44[0x64 - 0x44];
    unsigned int flags_64;
} Owner;

typedef struct Block {
    char pad_00[0x50];
    Owner *owner_50;
    char pad_54[1];
    unsigned char fired_55;
} Block;

typedef struct Obj {
    char pad_00[0x20];
    char vel_20[0x10];
    char pos_30[0x15];
    unsigned char kind_45;
    char pad_46[0x58 - 0x46];
    Block *blk_58;
} Obj;

typedef struct Entry {
    char pad_00[0x10];
    float f_10;
    char pad_14[0x0C];
} Entry;

extern int D_001C3920;
extern Entry D_001C2150[];
extern float func_070160(Obj *o);
extern int func_013CE0(Obj *o, float a, float b);
extern int func_070188(Obj *o, int a);
extern int func_16ECE0(Obj *o);
extern void func_16E838(Obj *o, int kind, int code);

void func_1700B0(Obj *o)
{
    Block *b;
    float t;
    int r;

    b = o->blk_58;
    t = func_070160(o);
    if (b->fired_55 == 0 && (b->owner_50->flags_64 & 1) != 0 && 0.56666666269302368f <= t && t < 0.7f
        && func_013CE0(o, 1.0f, 4.0f) != 0) {
        b->owner_50->cls_40->hook_20(D_001C2150[D_001C3920 - 16].f_10, b->owner_50, 2, 1, o->pos_30, o->vel_20, o);
        b->fired_55 = 1;
    }
    if (func_070188(o, 0) != 0) {
        b->fired_55 = 0;
        r = func_16ECE0(o);
        if (r == 14)
            func_16E838(o, o->kind_45, 15);
        else
            func_16E838(o, o->kind_45, r & 0xFF);
    }
}
