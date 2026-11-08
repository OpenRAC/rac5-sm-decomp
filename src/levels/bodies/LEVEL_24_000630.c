/* LEVEL_24.REL:0x000630: sum four fixed-point table values and a float term.
   Adapted from the already accepted record-sum C source. */
typedef struct {
    int a;
    int b;
    int c;
    int d;
    float e;
} LevelRecord;

extern float func_00000550(int index);

float func_00000630(LevelRecord *record) {
    LevelRecord value = *record;
    float total = 0.0f;
    total += func_00000550(value.d);
    total += func_00000550(value.a);
    total += func_00000550(value.c);
    total += func_00000550(value.b);
    return total + value.e;
}
