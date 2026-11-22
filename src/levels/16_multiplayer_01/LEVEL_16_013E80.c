/* LEVEL_16:0x013E80 -- placement copy of LEVEL_01_0145D0.c: tentatively moves the four-float position by a delta, lets func_076580 veto it when a checker is given, then tests the new position with func_013A40; on failure the old position is restored and 1 is returned, otherwise 0 or 2 depending on the checker's answer. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern int func_076580(void *checker, Vec4 *pos);
extern int func_013A40(float f, int a0, int a1, int a2);

int func_013E80(Vec4 *pos, Vec3 *delta, void *checker, void *arg, float f)
{
    Vec4 old;
    int ok;
    int ret;

    ok = 1;
    old.x = pos->x;
    old.y = pos->y;
    old.z = pos->z;
    old.w = pos->w;
    pos->x = old.x + delta->x;
    pos->y = old.y + delta->y;
    pos->z = old.z + delta->z;
    if (checker != 0)
        ok = func_076580(checker, pos);
    if (func_013A40(f, (int)pos, (int)arg, 1) == 0) {
        pos->x = old.x;
        pos->y = old.y;
        pos->z = old.z;
        pos->w = old.w;
        return 1;
    }
    ret = 2;
    if (ok != 0)
        ret = 0;
    return ret;
}
