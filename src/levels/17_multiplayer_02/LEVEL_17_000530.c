/* LEVEL_17.REL:0x000530: sum four fixed-point table values and a float term.
   Adapted from the already accepted record-sum C source. */
typedef struct {
    int a;
    int b;
    int c;
    int d;
    float e;
} LevelRecord;

extern float func_00000450(int index);

float func_00000530(LevelRecord *record) {
    LevelRecord value = *record;
    float total = 0.0f;
    total += func_00000450(value.d);
    total += func_00000450(value.a);
    total += func_00000450(value.c);
    total += func_00000450(value.b);
    return total + value.e;
}
