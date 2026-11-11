extern float floorf(float value);
extern void func_0DF198(float a, float b, void *p, void *q, int n);
extern int D_001E5448;
extern char D_00225D70[];

struct info {
    int tag;
    float angle;
    void *ptr;
};

struct pair {
    int x;
    int y;
};

void func_07BD58(float angle, int tag)
{
    struct info info;
    struct pair pair;
    int count;
    float steps;
    float zero = 0.0f;

    count = D_001E5448;
    info.angle = 0.087266467f;
    info.ptr = D_00225D70;
    info.tag = tag;
    steps = floorf(angle + 1.0f);
    if (zero < steps) {
        pair.x = count;
        pair.y = 0;
        func_0DF198(1.0f - angle, 1.0f, &pair, &info, (int)steps);
    }
}

