/* LEVEL_15:0x130100 -- evaluates a curve segment: picks the entry of the table (index clamped at zero) and returns a + b * (t * c). */
typedef struct {
    char pad_00[0x24];
    float a;
    float b;
    char pad_2C[4];
    float c;
    char pad_34[4];
} Seg;

typedef struct {
    Seg *segs;
} Curve;

typedef struct {
    int index;
    float t;
} Query;

float func_130100(Curve *cv, Query *q)
{
    int i = q->index;
    Seg *s;

    if (i < 1) {
        i = 0;
    }
    s = cv->segs + i;
    return s->a + s->b * (q->t * s->c);
}
