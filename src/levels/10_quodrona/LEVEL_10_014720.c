/* LEVEL_10:0x014720 -- placement copy of LEVEL_01_0145D0.c: tentatively moves the four-float position by a delta, lets func_084E90 veto it when a checker is given, then tests the new position with func_0142C8; on failure the old position is restored and 1 is returned, otherwise 0 or 2 depending on the checker's answer. */
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

extern int func_084E90(void *checker, Vec4 *pos);
extern int func_0142C8(float f, int a0, int a1, int a2);

int func_014720(Vec4 *pos, Vec3 *delta, void *checker, void *arg, float f)
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
        ok = func_084E90(checker, pos);
    if (func_0142C8(f, (int)pos, (int)arg, 1) == 0) {
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
