/* LEVEL_08:0x17CF40 -- placement copy of LEVEL_04_171B98.c: resolves the record's first two offset fields into pointers (the first must name a valid target, else the object is rejected), then, when the slot id is set, starts the matching sound for the current mode and stores the follow-up handle; returns 1. */
typedef struct Rec {
    int f0;
    int f4;
    int slot_08;
    int handle_0C;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec_54;
} Obj;

extern char *D_0024FC54;
extern int D_00264470;
extern void func_0FB190(int a);
extern unsigned int func_027B50(int a, unsigned int b);
extern int func_025DC0(int a);

int func_17CF40(Obj *o)
{
    Rec *r;
    char *target;
    int ok;
    int k;
    int t;

    func_0FB190(0);
    r = o->rec_54;
    if (r->f0 == 0) {
        ok = 0;
    } else {
        target = D_0024FC54 + r->f0;
        if (*(int *)(target + 0x40) == 0) {
            r->f0 = 0;
            ok = 0;
        } else {
            r->f0 = (int)target;
            ok = 1;
        }
    }
    if (!ok)
        return 0;
    if (r->f4 != 0) {
        target = D_0024FC54 + r->f4;
        if (*(int *)(target + 0x40) == 0)
            r->f4 = 0;
        else
            r->f4 = (int)target;
    }
    if (r->slot_08 >= 0) {
        k = D_00264470;
        if (k == 0x16)
            k = 3;
        else if (k == 0x17)
            k = 6;
        if (func_027B50(k * 2 + 2, r->slot_08 & 0xFF) == 0)
            r->handle_0C = func_025DC0(r->slot_08);
    }
    return 1;
}
