typedef struct {
    char pad_00[0x28];
    int i28;
    float f2C;
} Rec;

void func_15EEF0(char *o, float dt)
{
    Rec *r;
    float t;
    unsigned idx;
    int limit;
    int *p;

    r = *(Rec **)(o + 0x58);
    t = r->f2C + dt;
    r->f2C = t;
    if (t > 5.0f) {
        t = t - 5.0f;
        r->f2C = t;
        idx = r->i28 + 1;
        limit = 40;
        p = (idx >= 40) ? &limit : &idx;
        r->i28 = *p;
    }
}
