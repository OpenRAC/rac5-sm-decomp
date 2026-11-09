/* LEVEL_02.REL:0x174860: reviewed 336-byte candidate, held for ABI review.
 * Advances an object's timer and, once the current table entry's time is
 * reached, runs that entry's action and steps to the next entry.
 * pinned C with gnu-ee-trial links 336/336 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_174748 returning void with (pointer, float, int, int, int,
 * int, int), but the accepted LEVEL_02_174748.c defines it returning int with
 * (pointer, int).
 * It declares func_1E2B38 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_02_1E2B38.c defines it returning void with (int, pointer,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
union Flags174860 {
    unsigned int w;
    unsigned char b;
};
struct Rec174860 {
    float t_00;
    float f_04;
    union Flags174860 fl_08;
};
struct Sub174860 {
    char pad_00[0x11];
    unsigned char b_11;
};
struct Obj174860 {
    char pad_00[0x54];
    struct Sub174860 *s_54;
    char pad_58[0x18];
    float f_70;
};
struct Cam174860 {
    char pad_00[0x18];
    float f_18;
    float f_1C;
};

extern struct Rec174860 D_00236838[];
extern char D_003ACB10[];
extern struct Cam174860 *D_0021C624;

void func_174748(struct Obj174860 *o, float f, int a, int b, int c, int d, int e);
void func_1E2B38(char *p, struct Obj174860 *o, unsigned int v);
void func_1E2B68(char *p);
void func_0872A0(struct Obj174860 *o, struct Cam174860 *cam, int a2, int a3, int t0, int t1, int t2, int t3,
                 float f12, float f13, float f14, float f15);

void func_174860(struct Obj174860 *o, float dt)
{
    struct Sub174860 *s;
    struct Cam174860 *cam;
    struct Rec174860 *rec;

    s = o->s_54;
    o->f_70 = o->f_70 + dt;
    rec = &D_00236838[s->b_11];
    if (rec->t_00 <= o->f_70) {
        if (((rec->fl_08.w >> 2) & 0x3F) != 0) {
            func_174748(o, 0.0f, 0, 0, 0, 0, 0);
            return;
        }
        if ((rec->fl_08.w >> 1) & 1) {
            func_1E2B38(D_003ACB10, o, 0xFFFFFFFF);
        } else {
            func_1E2B68(D_003ACB10);
        }
        if (D_00236838[s->b_11].fl_08.b & 1) {
            cam = D_0021C624;
            if (cam != 0) {
                func_0872A0(o, cam, 0, 0, 0, 0, 0, 1, 1.0f, cam->f_18, cam->f_1C, D_00236838[s->b_11].f_04);
            }
        }
        s->b_11 = s->b_11 + 1;
    }
}
