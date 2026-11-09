/* LEVEL_01.REL:0x0F0048: reviewed 304-byte candidate, held for ABI review.
 * Spawns a randomised effect record from an object and, when the object has a
 * second slot, a marker record at the same position.
 * gnu-ee-trial C with gnu-ee-trial links 304/304 bytes and is byte-exact at
 * this and 11 other USA placements, but the prototypes disagree.
 * It declares func_097658 returning pointer with (pointer, int, int), but the
 * accepted LEVEL_01_097658.c defines it returning void with (pointer, int,
 * long long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    int pad_00;
    Vec3 pos;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
} Fx;

typedef struct {
    float f_00;
    Vec3 pos;
    void *p_10;
} Mark;

typedef struct {
    float f_00;
    char pad_04[0xC8];
    char f_CC[4];
} Cfg;

typedef struct {
    char pad_00[0x28];
    int id_28;
    Cfg *cfg_2C;
} Obj;

extern Fx *func_09FC18(int *ok, Obj *o, int n);
extern Mark *func_097658(int *ok, int id, int n);
extern int rand(void);

void func_0F0048(Obj *o, Vec3 *v)
{
    int ok1;
    int ok2;
    Fx *p;
    Mark *m;
    Cfg *c;
    char *q;

    p = func_09FC18(&ok1, o, 1);
    if (ok1 != 0) {
        c = o->cfg_2C;
        p->pos = *v;
        p->f_10 = c->f_00;
        p->f_14 = (float)rand() * 4.6566123179658803e-10f;
        p->f_18 = (float)rand() * 4.6566123179658803e-10f;
        p->f_1C = (float)rand() * 4.6566123179658803e-10f;
        if (o->id_28 != -1) {
            q = c->f_CC;
            m = func_097658(&ok2, o->id_28, 1);
            if (ok2 != 0) {
                m->f_00 = 1.0f;
                m->pos = *v;
                m->p_10 = q;
            }
        }
    }
}
