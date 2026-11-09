/* LEVEL_15.REL:0x128718: reviewed 364-byte candidate, held for ABI review.
 * Initialises a new effect record at a position from the shared frame template
 * and the owner's parameters, then starts its two sub-objects.
 * pinned C with gnu-ee-trial links 364/364 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer), but the
 * accepted caller LEVEL_15_128888.c declares it returning void with (pointer).
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
    Vec3 a;
    Vec3 b;
    Vec3 c;
} Frame;

typedef struct {
    int w_00;
    float f_04;
    Vec3 pos;
    Vec3 vec;
    Frame frame;
    Vec3 pos2;
    char part50[0x24];
    char part74[4];
} Rec;

typedef struct {
    char pad_00[4];
    float f_04;
    float f_08;
    int idx;
} Params;

typedef struct {
    char pad_00[0xE4];
    Params *params;
} Obj;

extern Frame D_002F3D68;
extern char D_00170D20[];
extern char D_0015B5A0[];

extern Rec *func_080558(int *ok, Obj *o, int n);
extern void func_0EA938(Vec3 *v, Frame *f, char *t);
extern void func_0E9C78(char *dst, Vec3 *v, float f);
extern void func_0D0380(char *dst, char *src, int n);

void func_128718(Obj *o, Vec3 *pos)
{
    int ok;
    Rec *r;
    Params *p;
    Vec3 *vp;
    Frame *tpl;

    p = o->params;
    r = func_080558(&ok, o, 1);
    if (ok == 0) {
        return;
    }
    vp = &r->vec;
    tpl = &D_002F3D68;
    r->w_00 = 0;
    r->f_04 = p->f_08;
    r->frame = D_002F3D68;
    r->pos2 = *pos;
    r->pos = *pos;
    func_0EA938(vp, tpl, D_00170D20);
    vp->x = vp->x + pos->x;
    vp->y = vp->y + pos->y;
    vp->z = vp->z + pos->z;
    func_0E9C78(r->part50, &tpl->b, p->f_04);
    func_0D0380(r->part74, (char *)(p->idx * 0xA0 + (int)D_0015B5A0), 2);
}
