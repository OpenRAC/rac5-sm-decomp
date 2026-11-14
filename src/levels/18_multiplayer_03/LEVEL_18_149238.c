/* LEVEL_18:0x149238 -- placement copy of LEVEL_16_14A940.c: one-shot setup of the object record: fails when the object is already set up; relocates the first stored offset against the load base when it is set, otherwise (record flag byte clear) runs the slot setter for both slots; then relocates the second offset when set and returns 1. */
typedef struct {
    char pad_58[0x58];
    float *f_58;
} Obj;

typedef struct Rec {
    int off0;
    int off4;
    char pad_08[0x14 - 0x08];
    unsigned char b14;
} Rec;

typedef struct Cell {
    char pad_00[0x45];
    unsigned char ready;
    char pad_46[0x54 - 0x46];
    Rec *rec;
} Cell;

typedef struct BaseRef {
    int base;
} BaseRef;
extern BaseRef D_001B5D24;
extern void func_14C018(Obj *a0, int a1);

int func_149238(Cell *o)
{
    Rec *r;
    int had;
    unsigned int i;

    if (o->ready != 0) {
        return 0;
    }
    r = o->rec;
    if (r->off0 == 0) {
        had = 0;
    } else {
        r->off0 = D_001B5D24.base + r->off0;
        had = 1;
    }
    if (!had) {
        if (r->b14 != 0) {
            return 0;
        }
        for (i = 0; i < 2; i++) {
            func_14C018((Obj *)o, i);
        }
    }
    if (r->off4 != 0) {
        r->off4 = D_001B5D24.base + r->off4;
    }
    return 1;
}
