/* LEVEL_02.REL:0x069E68: reviewed 152-byte candidate.
 * pinned C with gnu-ee-trial links 148 bytes; first differs at +8.
 * Retry: Recover the global-fade pointer and stack-bound selection that keeps the
 * retail 152-byte body; all qualified cc1 routes with the current pure C emit 148
 * bytes and first differ in the branch at +8.
 * No matching credit.
 */
typedef unsigned short u16;
typedef struct { char pad[0x108]; u16 state; } Actor;
typedef struct { char pad[0x3c]; float fade; } FadeState;
extern FadeState D_00250668;

void func_069E68(Actor *actor)
{
    float upper;
    float lower;
    float candidate;
    float *selected;

    if (actor->state == 9) {
        upper = 1.0f;
        candidate = D_00250668.fade + 0.05f;
        selected = &upper;
        if (candidate < upper)
            selected = &D_00250668.fade;
    } else {
        lower = 0.0f;
        candidate = D_00250668.fade - 0.05f;
        selected = &lower;
        if (lower < candidate)
            selected = &D_00250668.fade;
    }
    D_00250668.fade = candidate;
    D_00250668.fade = *selected;
}
