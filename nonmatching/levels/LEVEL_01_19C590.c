/* LEVEL_01.REL:0x19C590: reviewed 332-byte candidate, held for ABI review.
 * Probes the surface below a point, reports a hit kind through an optional
 * byte and writes the adjusted position back.
 * pinned C with gnu-ee-trial links 332/332 bytes and is byte-exact at this and
 * 13 other USA placements, but the prototypes disagree.
 * It declares func_110D08 returning pointer with no arguments, but the
 * accepted LEVEL_01_110D08.c defines it returning int with no arguments.
 * It declares func_0141D8 returning void with (pointer, int, int, float), but
 * the accepted LEVEL_01_0141D8.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Ent19C590 {
    char pad00[0x08];
    char sub8[0x40];
    unsigned short h48;
    char pad4A[0x02];
};

struct Tab19C590 {
    char pad00[0x0C];
    struct Ent19C590 *ents;
};

struct Obj19C590 {
    char pad00[0x30];
    float pos30[3];
};

extern int func_1123C8(float *pos, float *out);
extern struct Tab19C590 *func_110D08(void);
extern int func_19C1F8(struct Obj19C590 *o, float *out, float *pos, void *sub);
extern void func_0141D8(float *p, int a, int b, float x);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

int func_19C590(struct Obj19C590 *o, unsigned char *flag)
{
    float pos[4];
    float out[4];
    int result;
    int idx;

    result = 0;
    Copy3(pos, o->pos30);
    pos[3] = 0.18f;
    idx = func_1123C8(pos, out);
    if (idx >= 0) {
        if (func_110D08()->ents[idx].h48 & 8) {
            result = 1;
            if (flag != 0) {
                *flag = 3;
            }
        } else if (func_19C1F8(o, out, pos, func_110D08()->ents[idx].sub8) != 0) {
            result = 1;
            if (flag != 0) {
                *flag = 2;
            }
            func_0141D8(o->pos30, 0, 0, 0.2f);
        }
    }
    Copy3(o->pos30, pos);
    return result;
}
