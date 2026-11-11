/* LEVEL_02:0x180748 -- splits the remaining span into whole steps and a fraction, and applies the step handler to the next and previous steps when each fraction is large enough. */
typedef struct Pair {
    char pad_00[4];
    float *values;
} Pair;

typedef struct Rec {
    char *start;
    Pair *pair;
    unsigned int count;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
    float *rate;
} Obj;

extern void func_180908(Obj * self, float * base, float t, float frac, int index);

void func_180748(Obj *self)
{
    Rec *rec = self->rec;
    float *rate = self->rate;
    float *base = (float *)(rec->start + 0x30);
    float t = rec->pair->values[1];
    float d = base[1] - t;
    float q;
    float frac;
    int index;
    int next;

    if (d <= 1e-5f)
        return;
    q = d / *rate;
    index = (int)q;
    next = index + 1;
    frac = q - (float)index;
    if (frac > 0.01f && (unsigned int)next <= rec->count)
        func_180908(self, base, t, frac, next);
    if (1.0f - frac > 0.01f && index > 0)
        func_180908(self, base, t, 1.0f - frac, index);
}
