/* LEVEL_06/0x7F0: pack of 4 indices + weight -> weighted sum. */
typedef struct {
    int a;
    int b;
    int c;
    int d;
    float e;
} Pack;

extern float func_000710(int);

float func_000007F0(Pack *p) {
    Pack t = *p;
    float sum = 0.0f;
    sum += func_000710(t.d);
    sum += func_000710(t.a);
    sum += func_000710(t.c);
    sum += func_000710(t.b);
    return sum + t.e;
}
