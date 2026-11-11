/* LEVEL_03.REL:0x1FD698: reviewed 396-byte candidate, held for ABI review.
 * Derives scaled deltas, a clamped reciprocal and the four colour channels of
 * an effect record as floats.
 * pinned C with gnu-ee-trial links 396/396 bytes and is byte-exact at this and
 * 7 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer), but the accepted
 * caller LEVEL_03_1786B0.c declares it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    char pad_14[4];
    unsigned int color_18;
    float f_1C;
    float f_20;
    char pad_24[4];
    float f_28;
    float f_2C;
    float f_30;
    float f_34;
    float f_38;
    float f_3C;
    float f_40;
    float f_44;
} Obj;

void func_1FD698(Obj *o)
{
    o->f_28 = (o->f_04 - o->f_00) * 4.656612873077393e-10f;
    o->f_2C = (o->f_0C - o->f_08) * 4.656612873077393e-10f;
    o->f_30 = (o->f_10 > 0.9900000095367432f) ? 100.0f : 1.0f / (1.0f - o->f_10);
    o->f_34 = (float)(o->color_18 & 0xFF);
    o->f_38 = (float)((o->color_18 >> 8) & 0xFF);
    o->f_3C = (float)((o->color_18 >> 16) & 0xFF);
    o->f_40 = (float)((o->color_18 >> 24) & 0xFF);
    o->f_44 = (o->f_20 - o->f_1C) * 4.656612873077393e-10f;
}
