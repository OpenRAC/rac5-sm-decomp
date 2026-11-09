/* LEVEL_01.REL:0x0EF800: reviewed 304-byte candidate, held for ABI review.
 * Spawns up to two emitter records at a position, seeding speeds from rand.
 * gnu-ee-trial C with gnu-ee-trial links 304/304 bytes and is byte-exact at
 * this and 19 other USA placements, but the prototypes disagree.
 * It declares func_097658 returning pointer with (pointer, int, int), but the
 * accepted LEVEL_01_097658.c defines it returning void with (pointer, int,
 * long long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Vec3 {
    float x;
    float y;
    float z;
};

extern int rand(void);
extern char *func_09FC18(int *ok, char *e, int n);
extern char *func_097658(int *ok, int a1, int n);

void func_0EF800(char *e, struct Vec3 *pos)
{
    int ok;
    int ok2;
    char *p;
    char *q;
    char *cfg;
    char *x;

    p = func_09FC18(&ok, e, 1);
    if (ok == 0) {
        return;
    }
    cfg = *(char **)(e + 0x2C);
    *(struct Vec3 *)(p + 4) = *pos;
    *(float *)(p + 0x10) = *(float *)cfg;
    *(float *)(p + 0x14) = (float)rand() * 4.6566123179658803e-10f;
    *(float *)(p + 0x18) = (float)rand() * 4.6566123179658803e-10f;
    *(float *)(p + 0x1C) = (float)rand() * 4.6566123179658803e-10f;
    if (*(int *)(e + 0x28) == -1) {
        return;
    }
    x = cfg + 0xD4;
    q = func_097658(&ok2, *(int *)(e + 0x28), 1);
    if (ok2 == 0) {
        return;
    }
    *(float *)q = 1.0f;
    *(struct Vec3 *)(q + 4) = *pos;
    *(char **)(q + 0x10) = x;
}
