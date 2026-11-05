/* Candidate for LEVEL_01.REL:0x064DF0.
 * Moves a shared fade value toward one while state nine is active,
 * and toward zero otherwise.
 * Pinned GNU EE links 148 bytes versus 152; the first different byte
 * is at body offset 8. This is not a match.
 */
typedef unsigned short u16;
typedef struct { char pad[0x108]; u16 state; } Actor;
typedef struct { char pad[0x3C]; float fade; } FadeState;
extern FadeState D_00239158;

void func_064DF0(Actor *actor)
{
    float upper;
    float lower;
    float candidate;
    float *selected;

    if (actor->state == 9) {
        upper = 1.0f;
        candidate = D_00239158.fade + 0.05f;
        selected = &upper;
        if (candidate < upper)
            selected = &D_00239158.fade;
    } else {
        lower = 0.0f;
        candidate = D_00239158.fade - 0.05f;
        selected = &lower;
        if (lower < candidate)
            selected = &D_00239158.fade;
    }
    D_00239158.fade = candidate;
    D_00239158.fade = *selected;
}
