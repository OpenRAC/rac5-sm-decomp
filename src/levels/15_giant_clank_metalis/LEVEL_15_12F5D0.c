/* LEVEL_15:0x12F5D0 -- advances a fractional time accumulator, spawning a record for each whole step, then runs a self-check of the float random generator over a configured number of rounds. */
typedef struct {
    int w[16];
} Rec;

extern Rec D_00171448;
extern float D_0015DF88;
extern unsigned int D_0015DF70;
extern int D_002F3CEC;
extern unsigned int D_0015DF7C;
extern float D_0015DF80;

extern float floorf(float x);
extern float fabsf(float x);

extern void func_0C2218(float a, int h, float b, Rec *r, int n);

void func_12F5D0(void)
{
    Rec rec;
    float timer;
    float t;
    float whole;
    float seed;
    float next;
    float q;
    unsigned int i;
    int h;

    timer = D_0015DF88;
    h = D_002F3CEC;
    t = timer + 0.0f;
    rec = D_00171448;
    rec.w[15] = D_0015DF70 & 0xFFFFFF;
    whole = floorf(t);
    if (whole > 0.0f) {
        func_0C2218((1.0f - timer) * 0.0f, h, 0.0f, &rec, (int)whole);
        timer = t - whole;
    } else {
        timer = t;
    }
    D_0015DF88 = timer;
    seed = D_0015DF80;
    i = 0;
    if (D_0015DF7C != 0) {
        do {
            q = (float)(int)(seed * 7.826379e-06f);
            next = fabsf((seed - q * 127773.0f) * 16807.0f - q * 2836.0f);
            if (seed == next) {
                *(int *)0 = 0;
            }
            if (next == D_0015DF80) {
                break;
            }
            i++;
            seed = next;
        } while (i < D_0015DF7C);
    }
}
