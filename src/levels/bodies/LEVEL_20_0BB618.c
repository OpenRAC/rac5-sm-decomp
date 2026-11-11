/* LEVEL_20:0x0BB618 -- placement copy of LEVEL_01_0EF800.c: spawns up to two emitter records at a position, seeding speeds from rand. */
struct Vec3 {
    float x;
    float y;
    float z;
};

extern int rand(void);
extern char *func_0797D8(int *ok, char *e, int n);
extern char *func_075968(int *ok, int a1, int n);

void func_0BB618(char *e, struct Vec3 *pos)
{
    int ok;
    int ok2;
    char *p;
    char *q;
    char *cfg;
    char *x;

    p = func_0797D8(&ok, e, 1);
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
    q = func_075968(&ok2, *(int *)(e + 0x28), 1);
    if (ok2 == 0) {
        return;
    }
    *(float *)q = 1.0f;
    *(struct Vec3 *)(q + 4) = *pos;
    *(char **)(q + 0x10) = x;
}
