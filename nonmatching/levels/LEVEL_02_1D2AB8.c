/* USA LEVEL_02.REL:0x1D2AB8, 208-byte candidate (21 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x38];
    int w38;
    char pad3C[8];
    int w44;
} Link;

typedef struct {
    char pad00[0x16C];
    unsigned int timer;
} Sub;

typedef struct {
    char pad00[0x30];
    float x;
    char pad34[4];
    float z;
    char pad3C[0x18];
    Link *link;
    Sub *sub;
} Obj;

typedef struct {
    char pad00[0x30];
    float pos[3];
} Cam;

extern Cam D_0024C650;
extern int func_08B060(int a, float *pos);

int func_1D2AB8(Obj *o)
{
    Link *link = o->link;
    float *pos;
    float dx;
    float dz;
    float d2;
    int r;

    if (link->w38 == 0) {
        if (o->sub->timer < 30) {
            r = 3;
        } else {
            pos = D_0024C650.pos;
            if (link->w44 != 0 && func_08B060(link->w44, pos) == 0) {
                r = 3;
            } else {
                dx = o->x - pos[0];
                dz = o->z - pos[2];
                d2 = dx * dx + dz * dz;
                if (d2 >= 25.0f) {
                    r = 6;
                } else if (d2 >= 9.0f) {
                    r = 5;
                } else {
                    r = 3;
                }
            }
        }
    } else {
        r = 12;
    }
    return r;
}
