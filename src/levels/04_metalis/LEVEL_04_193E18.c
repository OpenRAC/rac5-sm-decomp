/* LEVEL_04:0x193E18 -- converts two stored offsets of the record into pointers (each kept only when its target is valid), then runs a check and clears a byte in both targets on failure. */
typedef struct {
    char pad00[0x54];
    char *child;
} Target;

typedef struct {
    Target *f0;
    Target *f4;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Obj;

extern int D_002201B4;
extern int func_027098(int a, int b);

int func_193E18(Obj *o)
{
    Rec *rec = o->rec;
    int v;
    int ok;
    int t;

    v = (int)rec->f0;
    if (v == 0) {
        ok = 0;
    } else {
        t = D_002201B4 + v;
        if (*(int *)(t + 0x40) == 0) {
            rec->f0 = 0;
            ok = 0;
        } else {
            rec->f0 = (Target *)t;
            ok = 1;
        }
    }
    if (!ok) {
        return 0;
    }
    v = (int)rec->f4;
    if (v == 0) {
        ok = 0;
    } else {
        t = D_002201B4 + v;
        if (*(int *)(t + 0x40) == 0) {
            rec->f4 = 0;
            ok = 0;
        } else {
            rec->f4 = (Target *)t;
            ok = 1;
        }
    }
    if (!ok) {
        return 0;
    }
    if (func_027098(0x1B, 0xFF) != 0) {
        *(rec->f0->child + 0x28) = 0;
        *(rec->f4->child + 0x28) = 0;
        return -1;
    }
    return 1;
}
