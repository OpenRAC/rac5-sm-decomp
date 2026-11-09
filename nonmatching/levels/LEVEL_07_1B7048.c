/* LEVEL_07.REL:0x1B7048: reviewed 424-byte candidate, held for ABI review.
 * Sets a state byte on an object (kicking off a blend for modes 4-6), then two
 * helper routines for the object's vector state.
 * pinned C with gnu-ee-trial links 424/424 bytes and is byte-exact at this USA
 * placement, but the prototypes disagree.
 * It declares func_07F120 returning void with (pointer, pointer, int), but the
 * accepted LEVEL_07_07F120.c defines it returning float with (int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Mgr {
    char pad0[4];
    char *rec;
} Mgr;

typedef struct Obj {
    char pad0[0x40];
    Mgr *w40;
    unsigned char b44;
    unsigned char b45;
    unsigned char b46;
    char pad47[0x11];
    char *w58;
    char pad5c[0x14];
    int w70;
} Obj;

extern void func_07EE90(Obj *o, int a, int b, int c, float f, float g);
extern float *func_08DED0(int a);
extern void func_128D48(float *a, Obj *o, float *b);
extern void func_07F120(Obj *o, void *buf, int n);
extern void func_1B71F0(Obj *o, void *buf);

void func_1B7048(Obj *o, unsigned char mode)
{
    if (mode == 5) {
        o->w70 = 0;
        o->b46 = 0;
        func_07EE90(o, 1, 0, 1, 0.125f, *(float *)&o->w70);
    } else if (mode == 6) {
        o->w70 = 0;
        o->b46 = 0;
        func_07EE90(o, 1, 0, 1, 0.125f, *(float *)&o->w70);
    } else if (mode == 4) {
        func_07EE90(o, 0, 0, 1, 0.5f, 0.0f);
    }
    o->b45 = mode;
}

void func_1B70F0(Obj *o)
{
    char *d = o->w58;
    float *s = func_08DED0(0);
    float *src = s + 8;
    float *dst = (float *)(d + 0x24);
    float k = *(float *)(*(char **)(*(char **)(o->w40->rec + o->b44 * 0x34 + 4) + 0x1C) + 0x10) * 0.00125f;

    dst[0] = k * src[0];
    dst[1] = k * src[1];
    dst[2] = k * src[2];
    s[8] = 0;
    src[1] = 0;
    src[2] = 0;
}

void func_1B7190(Obj *o)
{
    char buf[0x40];
    char *d = o->w58;

    func_128D48((float *)(d + 0x24), o, (float *)(d + 0x24));
    func_07F120(o, buf, 1);
    if (*(unsigned char *)(d + 0x72))
        func_1B71F0(o, buf);
}
