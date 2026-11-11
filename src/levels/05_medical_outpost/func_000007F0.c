/* LEVEL_05:0x7F0 -- sum four table lookups plus a float term. */
typedef struct {
    int a;
    int b;
    int c;
    int d;
    float e;
} Quintet;

extern float func_00000710(int index);

float func_000007F0(Quintet *p) {
    Quintet s = *p;
    float total = 0.0f;
    total += func_00000710(s.d);
    total += func_00000710(s.a);
    total += func_00000710(s.c);
    total += func_00000710(s.b);
    return total + s.e;
}
