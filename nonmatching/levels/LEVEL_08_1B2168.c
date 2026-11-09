/* LEVEL_08.REL:0x1B2168: reviewed 312-byte candidate, held for ABI review.
 * Per-frame timer update for an object: on the first long tick it seeds a
 * random countdown, spawns three effects, then steps the timers.
 * gnu-ee-trial C with gnu-ee-trial links 312/312 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It declares func_1B6900 returning void with (int), but the accepted
 * LEVEL_08_1B6900.c defines it returning pointer with (pointer).
 * It declares func_003718 returning void with (int, float, int, float), but
 * the accepted LEVEL_08_003718.c defines it returning void with (pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int rand(void);
extern float D_00284404;
extern void func_1B6900(int a);
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
                func_1B6900(*(int *)(s0 + 0x10C));
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
