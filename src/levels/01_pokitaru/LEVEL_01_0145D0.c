/* LEVEL_01:0x0145D0 -- tentatively moves the four-float position by a delta, lets func_084890 veto it when a checker is given, then tests the new position with func_014058; on failure the old position is restored and 1 is returned, otherwise 0 or 2 depending on the checker's answer. */
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

extern int func_084890(void *checker, Vec4 *pos);
extern int func_014058(float f, int a0, int a1, int a2);

int func_0145D0(Vec4 *pos, Vec3 *delta, void *checker, void *arg, float f)
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
        ok = func_084890(checker, pos);
    if (func_014058(f, (int)pos, (int)arg, 1) == 0) {
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
