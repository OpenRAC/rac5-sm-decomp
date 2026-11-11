/* LEVEL_04:0x630 / LEVEL_05:0x7F0 -- sum four table lookups plus a float term. */
typedef struct {
    int a;
    int b;
    int c;
    int d;
    float e;
} Quintet;

extern float func_00000550(int index);

float func_00000630(Quintet *p) {
    Quintet s = *p;
    float total = 0.0f;
    total += func_00000550(s.d);
    total += func_00000550(s.a);
    total += func_00000550(s.c);
    total += func_00000550(s.b);
    return total + s.e;
}
