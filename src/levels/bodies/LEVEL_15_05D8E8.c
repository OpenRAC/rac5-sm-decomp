extern float floorf(float value);
extern void func_0BDC50(float a, float b, void *p, void *q, int n);
extern int D_0014AD48;
extern char D_001820D8[];

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

    count = D_0014AD48;
    info.angle = 0.087266467f;
    info.ptr = D_001820D8;
    info.tag = tag;
    steps = floorf(angle + 1.0f);
    if (zero < steps) {
        pair.x = count;
        pair.y = 0;
        func_0BDC50(1.0f - angle, 1.0f, &pair, &info, (int)steps);
    }
}

