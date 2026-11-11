/* LEVEL_01:0x075470 -- placement copy of LEVEL_02_07BD58.c. */
extern float floorf(float value);
extern void func_0E15B8(float a, float b, void *p, void *q, int n);
extern int D_001F60C8;
extern char D_0023A070[];

struct info {
    int tag;
    float angle;
    void *ptr;
};

struct pair {
    int x;
    int y;
};

void func_075470(float angle, int tag)
{
    struct info info;
    struct pair pair;
    int count;
    float steps;
    float zero = 0.0f;

    count = D_001F60C8;
    info.angle = 0.087266467f;
    info.ptr = D_0023A070;
    info.tag = tag;
    steps = floorf(angle + 1.0f);
    if (zero < steps) {
        pair.x = count;
        pair.y = 0;
        func_0E15B8(1.0f - angle, 1.0f, &pair, &info, (int)steps);
    }
}

