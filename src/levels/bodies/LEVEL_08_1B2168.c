/* LEVEL_08:0x1B2168 -- per-frame timer update for an object: on the first long tick it seeds a random countdown, spawns three effects, then steps the timers. */

extern int rand(void);
extern float D_00284404;
extern struct Spawn *func_1B6900(void *arg);
extern void func_003718(int a, float c, int b, float d);
extern void func_003748(int a, float c, float d, int b);
extern void func_0038B8(int a, float c, float d, int b);
extern int func_088BB8(char *obj, void *fn, int a);
extern void func_1B22A0(char *obj, int a, int b);
extern char D_001B3148[];

void func_1B2168(char *o)
{
    char *s0;
    float one;
    float t;

    s0 = *(char **)(o + 0x58);
    if (*(float *)(o + 0x70) > 60.0f) {
        if (*(int *)(s0 + 0x110) == 0) {
            if (D_00284404 > 5.0f) {
                func_1B6900(*(void **)(s0 + 0x10C));
            }
            *(int *)(s0 + 0x110) = rand() % 6 + 6;
        }
    }
    one = 1.0f;
    func_003718(100, 8.0f, 3, one);
    func_003748(100, 5.0f, one, 3);
    func_0038B8(100, 0.4f, one, 3);
    func_088BB8(o, D_001B3148, 1);
    *(int *)(s0 + 0x110) = *(int *)(s0 + 0x110) - 1;
    t = *(float *)(o + 0x70) - one;
    *(float *)(o + 0x70) = t;
    if (t <= 0.0f) {
        func_1B22A0(o, *(unsigned char *)(o + 0x45), 7);
    }
}
