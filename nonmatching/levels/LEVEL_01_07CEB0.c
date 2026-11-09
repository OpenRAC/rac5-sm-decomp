/* LEVEL_01.REL:0x07CEB0: reviewed 260-byte candidate, held for ABI review.
 * Copies a looked-up matrix and scales its translation; returns the scale.
 * pinned C with gnu-ee-trial links 260/260 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It defines the function returning float with (pointer, pointer, int), but
 * the accepted caller LEVEL_01_07CFB8.c declares it returning float with (int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct Mat { float m[16]; } Mat;
typedef struct Cfg { char pad[0x10]; float scale; } Cfg;
typedef struct Mid { char pad[0x1C]; Cfg *cfg; } Mid;
typedef struct Slot { int a; Mid *mid; char pad[0x34 - 8]; } Slot;
typedef struct Tab { int a; Slot *slots; } Tab;
typedef struct Obj { char pad[0x40]; Tab *tab; unsigned char idx; } Obj;
extern Mat *func_08BCC8(int key, int a);
float func_07CEB0(Obj *self, Mat *dst, int key)
{
    Mat *src = func_08BCC8(key, 1);
    float s;
    if (src == 0)
        return 0.0f;
    dst->m[8] = src->m[8];
    dst->m[9] = src->m[9];
    dst->m[10] = src->m[10];
    dst->m[11] = src->m[11];
    dst->m[0] = src->m[0];
    dst->m[1] = src->m[1];
    dst->m[2] = src->m[2];
    dst->m[3] = src->m[3];
    dst->m[4] = src->m[4];
    dst->m[5] = src->m[5];
    dst->m[6] = src->m[6];
    dst->m[7] = src->m[7];
    dst->m[12] = src->m[12];
    dst->m[13] = src->m[13];
    dst->m[14] = src->m[14];
    dst->m[15] = src->m[15];
    s = self->tab->slots[self->idx].mid->cfg->scale;
    dst->m[12] *= s;
    dst->m[13] *= s;
    dst->m[14] *= s;
    return s;
}
