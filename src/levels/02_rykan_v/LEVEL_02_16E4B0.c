/* LEVEL_02:0x16E4B0 -- adds a sample to a running average held in a record. */
typedef struct {
    char pad0[8];
    float a;
    float b;
    char pad10[9];
    unsigned char flag;
} Rec;

typedef struct {
    Rec *rec;
    char pad4[0x20];
    unsigned int count;
} Avg;

static inline void Scale2(float *p, float k)
{
    p[0] *= k;
    p[1] *= k;
}

void func_16E4B0(Avg *m, float x, float y)
{
    float k;

    k = (float)m->count;
    Scale2(&m->rec->a, k);
    m->rec->a += x;
    m->rec->b += y;
    m->count++;
    Scale2(&m->rec->a, 1.0f / (float)m->count);
    m->rec->flag = 1;
}
