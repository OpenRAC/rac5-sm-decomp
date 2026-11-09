/* LEVEL_01.REL:0x07CB58: reviewed 208-byte candidate, held for ABI review.
 * Sets up one entry's matrix and blends it into the object's pose.
 * gnu-ee-trial C with gnu-ee-trial links 208/208 bytes and is byte-exact at
 * this and 13 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, float, int), but the
 * accepted caller LEVEL_01_17BC68.c declares it returning void with (pointer,
 * int, float).
 * It defines the function returning void with (pointer, float, int), but the
 * accepted caller LEVEL_01_15A4F0.c declares it returning void with (pointer,
 * int, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char *tab;
    char *ents;
} Hdr;
typedef struct {
    char *mats;
    char pad4[4];
    unsigned char cnt;
} Ent;
typedef struct {
    char pad0[0x40];
    char *hdr;
    unsigned char sel;
    char pad45[3];
    float *pose;
    char pad4C[0x64 - 0x4C];
    unsigned flags;
} Obj;
extern void func_082758(Obj *o);
extern int func_089BE8(char *m, char *dst);
extern void func_088B20(float *pose, char *dst, float t);

void func_07CB58(Obj *o, float t, unsigned idx)
{
    Ent *e;
    char *dst;
    e = *(Ent **)(*(char **)((char *)o->hdr + 4) + o->sel * 0x34 + 8);
    if (idx < e->cnt) {
        func_082758(o);
        dst = (char *)o->pose + 0x5C + ((o->flags >> 8) & 1) * 0x28;
        func_089BE8(e->mats + idx * 64, dst);
        func_088B20(o->pose, dst, t);
        o->pose[2] = 1.0f;
    }
}
