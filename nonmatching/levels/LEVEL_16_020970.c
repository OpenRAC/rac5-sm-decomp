/* LEVEL_16.REL:0x020970: reviewed 216-byte candidate, held for ABI review.
 * Initializes a sub-object's defaults and resolves hashed ids into tables.
 * pinned C with gnu-ee-trial links 216/216 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_106E98 returning int with (int), but the accepted
 * LEVEL_16_106E98.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    int f14;
    int pad18;
    int f1C;
    int f20;
    int pad24;
    int f28;
    int pad2C;
    float f30;
    char f34;
    char f35;
    char pad36[2];
    int f38;
    int f3C;
    char pad40[0xC];
    float f4C;
} Sub020970;

typedef struct {
    char pad[0x998];
    Sub020970 sub;
} Obj020970;

extern int D_0019C9EC;
extern int D_0019C9F0[8];
extern int D_001C1768[8];
extern int func_112BD0(int a);
extern int func_106E98(int a);

void func_020970(Obj020970 *o)
{
    Sub020970 *s = &o->sub;
    unsigned int i;
    int r = func_112BD0(2);

    s->f14 = 0;
    s->f10 = r ? 2 : 0;
    s->fC = 0;
    s->f8 = 1;
    s->f28 = 0;
    s->f1C = 0;
    s->f20 = 0;
    s->f30 = 1.0f;
    s->f34 = 0;
    s->f38 = 1;
    s->f3C = 1;
    s->f0 = 0;
    s->f4 = 0;
    s->f35 = 1;
    s->f4C = 1.0f;
    D_0019C9EC = func_106E98(0xE4F93912);
    for (i = 0; i < 8; i++)
        D_0019C9F0[i] = func_106E98(D_001C1768[i]);
}
