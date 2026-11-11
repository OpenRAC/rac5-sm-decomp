extern void *D_00251A9C;
typedef struct ATRACInstance ATRACInstance;
extern void fade_atrac(ATRACInstance *instance, float start, float duration)
    __asm__("SND_FadeAndStopATRACInstance__FP13ATRACInstanceff");
extern ATRACInstance *play_atrac(const char *name, int *out,
                                float volume, unsigned char loop)
    __asm__("SND_PlayATRAC__FPCcPifb");
extern void func_0280F0(float f);

void func_1AD348(void *a0)
{
    void *g = D_00251A9C;

    if (g != 0 && a0 != g) {
        void *p = *(void **)((char *)g + 0x58);

        if (*(int *)p != 0) {
            fade_atrac(*(ATRACInstance **)p, 5.0f, 0.0f);
            *(int *)p = 0;
        }
    }

    D_00251A9C = a0;
    if (a0 != 0) {
        void *q;
        void *v;

        q = *(void **)((char *)a0 + 0x58);
        v = play_atrac(0, *(int **)((char *)q + 4), 1.0f, 0);
        *(void **)q = v;
        if (v != 0)
            func_0280F0(*(float *)((char *)v + 0x68));
        *(char *)((char *)q + 0x0D) = 0;
    }
}
