/* Wave 17 integration: placeholder symbol(s) renamed to carry their
   measured module address (level_fixed_to_float->func_000004F8); source body unchanged.
   Original lot source: func_shared_record_sum.c. */
/* 20-byte record (int,int,int,int,float) passed by value; each integer goes
   through the level's fixed-point conversion helper (resolved from the retail
   call site, so the same body serves LEVEL_09 and LEVEL_10). */
typedef struct {
    int a;
    int b;
    int c;
    int d;
    float e;
} LevelRecord;

extern float func_000004F8(int value);

float func_0007F0(LevelRecord record) {
    float total = 0.0f;

    total += func_000004F8(record.d);
    total += func_000004F8(record.a);
    total += func_000004F8(record.c);
    total += func_000004F8(record.b);
    return total + record.e;
}
