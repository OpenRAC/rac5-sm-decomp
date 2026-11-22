/* LEVEL_08:0x06A618 -- placement copy of LEVEL_01_064DF0.c: moves the shared fade value toward one by 0.05 while the actor is in state nine, and toward zero by 0.05 otherwise. */
typedef unsigned short u16;
typedef struct { char pad[0x108]; u16 state; } Actor;
typedef struct { char pad[0x3C]; float fade; } FadeState;
extern FadeState D_002883E8;
static __inline__ float *MinP(float *a, float *b) { return *a < *b ? a : b; }
static __inline__ float *MaxP(float *a, float *b) { return *a > *b ? a : b; }
void func_06A618(Actor *actor)
{
    float one;
    float zero;
    if (actor->state == 9) {
        one = 1.0f;
        D_002883E8.fade = D_002883E8.fade + 0.05f;
        D_002883E8.fade = *MinP(&D_002883E8.fade, &one);
    } else {
        zero = 0.0f;
        D_002883E8.fade = D_002883E8.fade - 0.05f;
        D_002883E8.fade = *MaxP(&D_002883E8.fade, &zero);
    }
}
