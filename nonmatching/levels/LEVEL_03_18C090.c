/* USA LEVEL_03:18C090, 256-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 256 bytes: 11 differing words; first difference +0x28. No matching credit.
 * Remaining issue: The unused frame array or unrelated pointer-type reuse was removed. Recover
 * the original frame ownership or aliasing from caller and field evidence before retrying.
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_03:0x18C090 -- picks a side by facing and fires the five slot callbacks. */
typedef struct Info {
    char pad0[8];
    void *target;
    char pad0C[0x1A];
    unsigned char front[5];
    unsigned char back[5];
} Info;

typedef struct Obj {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x18];
    Info *info;
} Obj;

typedef struct Vecs {
    float v[4];
    float d[3];
} Vecs;

static __inline__ void Sub3(float *r, float *a, float *b)
{
    r[0] = a[0] - b[0];
    r[1] = a[1] - b[1];
    r[2] = a[2] - b[2];
}

extern void func_01A0B0(float *out);
extern int func_084588(void *target, float *dir);
extern void func_0180C0(int id, int arg);

void func_18C090(Obj *o)
{
    Vecs t;
    float *p;
    Info *info;
    unsigned char *s;
    unsigned char *arr;
    unsigned char *end;

    p = o->pos;
    info = o->info;
    func_01A0B0(t.v);
    Sub3(t.d, t.v, o->pos);
    if (info->target != 0) {
        if (func_084588(info->target, t.v) == 0) {
            return;
        }
    }
    if (t.d[0] * o->pos[0] + t.d[1] * p[1] + t.d[2] * p[2] < 0.0f) {
        arr = info->back;
    } else {
        arr = info->front;
    }
    s = arr;
    end = s + 5;
    do {
        if (*s != 0xFF) {
            func_0180C0(*s, 0);
        }
        s++;
    } while (s < end);
}
