/* USA LEVEL_05.REL:0x18E720, 176-byte candidate (14 November 2026).
 * Measured pinned --flag=-mno-check-zero-division: 24 differing words; first
 * difference at 48.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Item;

typedef struct {
    char pad00[4];
    unsigned char flag;
} Owner;

typedef struct {
    char pad00[0x18];
    int active;
} Rec;

typedef struct {
    char pad00[0x54];
    Owner *owner;
    Rec *rec;
} Obj;

extern Item *D_0038E4A0[];
extern int rand(void);
extern void func_07E070(float a, float b, float c, float d, Obj *o, void *item, int *slot, int w, int x, int y, int z, int k);

int func_18E720(Obj *o)
{
    Rec *rec = o->rec;
    Item *it;
    int n;

    o->owner->flag = 1;
    if (rec->active == 0) {
        n = 2;
        it = D_0038E4A0[rand() % n];
        if (it != 0)
            func_07E070(it->f14, it->f18, it->f1C, it->f20, o, it, &rec->active, 0, 0, 0, 0, 1);
    }
    return 2;
}
