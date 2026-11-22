/* LEVEL_16:0x0577D0 -- placement copy of LEVEL_01_064DF0.c: moves the shared fade value toward one by 0.05 while the actor is in state nine, and toward zero by 0.05 otherwise. */
typedef unsigned short u16;
typedef struct { char pad[0x108]; u16 state; } Actor;
typedef struct { char pad[0x3C]; float fade; } FadeState;
extern FadeState D_001EB828;
static __inline__ float *MinP(float *a, float *b) { return *a < *b ? a : b; }
static __inline__ float *MaxP(float *a, float *b) { return *a > *b ? a : b; }
void func_0577D0(Actor *actor)
{
    float one;
    float zero;
    if (actor->state == 9) {
        one = 1.0f;
        D_001EB828.fade = D_001EB828.fade + 0.05f;
        D_001EB828.fade = *MinP(&D_001EB828.fade, &one);
    } else {
        zero = 0.0f;
        D_001EB828.fade = D_001EB828.fade - 0.05f;
        D_001EB828.fade = *MaxP(&D_001EB828.fade, &zero);
    }
}
