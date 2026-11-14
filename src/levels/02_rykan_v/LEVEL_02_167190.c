/* LEVEL_02:0x167190 -- resolves the record's first offset against a global base (clearing it when the target is unnamed), relocates two more offset fields and clears the nested block when all were set. */
typedef struct {
    int f0;
    int f4;
    int f8;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    char *nested;
} Obj;

extern char *D_0021BD54;
extern void *memset(void *p, int c, unsigned int n);

int func_167190(Obj *o)
{
    Rec *r = o->rec;
    char *target;
    int ok1;
    int ok2;
    int ok3;

    if (r->f0 == 0) {
        ok1 = 0;
    } else {
        target = D_0021BD54 + r->f0;
        if (*(int *)(target + 0x40) == 0) {
            r->f0 = 0;
            ok1 = 0;
        } else {
            r->f0 = (int)target;
            ok1 = 1;
        }
    }
    if (!ok1) {
        return 0;
    }
    if (r->f8 == 0) {
        ok2 = 0;
    } else {
        r->f8 = (int)D_0021BD54 + r->f8;
        ok2 = 1;
    }
    if (!ok2) {
        return 0;
    }
    if (r->f4 == 0) {
        ok3 = 0;
    } else {
        r->f4 = (int)D_0021BD54 + r->f4;
        ok3 = 1;
    }
    if (!ok3) {
        return 0;
    }
    memset(o->nested, 0, 8);
    return 1;
}
