/* LEVEL_18:0x0391D8 -- placement copy of LEVEL_16_03A998.c: idle blink timer of the attached sub-object: restarts the countdown with a random delay and triggers the blink animation. */
typedef struct Sub {
    char pad00[0x48];
    int w48;
} Sub;

typedef struct Actor {
    char pad00[0x100];
    short h100;
    char pad102[0x49E];
    Sub *sub;
    char pad5A4[0x3BC];
    unsigned long long flags;
    char pad968[0x11C];
    float timer;
    int phase;
    float cooldown;
} Actor;

extern int rand(void);

static inline float RandRange(float lo, float hi)
{
    float range = hi - lo;

    return lo + range * ((float)rand() * (1.0f / 2147483648.0f));
}

extern int func_06F488(char *a0);
extern int func_079B00(int a);
extern int func_06F218(Sub *s, int a);
extern void func_06F370(float a, float b, Sub *s, int c, int d, int e);

void func_0391D8(Actor *a)
{
    unsigned int r;
    int v;
    if (a->sub == 0) {
        return;
    }
    r = func_06F488((char *)a->sub);
    if (a->flags & 0x1000000000000ULL) {
        if (a->cooldown == 0.0f && a->h100 == 0 && r == 0) {
            a->cooldown = 12.0002394f;
            a->timer = RandRange(5.00010014f, 12.0002394f);
            func_06F370(0.2f, 0.0f, a->sub, 4, 0, 1);
            return;
        }
        if (a->timer == 0.0f && r == 0) {
            Sub *s = a->sub;
            v = 2;
            if (a->phase == 2) {
                v = 3;
            }
            a->phase = v;
            func_06F370(0.2f, 0.0f, s, v, 0, 1);
            a->timer = RandRange(5.00010014f, 12.0002394f);
            return;
        }
    }
    if (r >= 2 && func_079B00(a->sub->w48) == 0 && func_06F218(a->sub, 0) != 0) {
        func_06F370(0.2f, 0.0f, a->sub, 0, 0, 1);
    }
}
