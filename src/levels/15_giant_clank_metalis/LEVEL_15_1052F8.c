/* LEVEL_15:0x1052F8 -- arms one of two sampler slots: resets its timer, records the config and tag, and initialises the sample over a clamped span. */
typedef struct Config Config;
typedef struct { int w; int h; } Dims;
struct Config { int pad0; Dims *dims; };
typedef struct Sample { Config *config; float value; void *first; void *second; } Sample;
typedef struct { Sample sample; int tag; } Entry;
typedef struct { int pad0; float t; } Timer;
typedef struct {
    char pad_000[0x3F8];
    Timer timers[2];
    Entry entries[2];
} Owner;

extern void func_104BF8(Sample *sample, Config *config, void *first, void *second);

void func_1052F8(Owner *s, int slot, Config *b, int c, int d, int e, int f)
{
    int m;
    int r;

    s->timers[slot].t = -0.03333333507180214f;
    s->entries[slot].sample.config = b;
    s->entries[slot].tag = f;
    m = b->dims->w * b->dims->h;
    if (d > 0) {
        r = c + (d >= m ? m : d);
    } else {
        r = c + m;
    }
    if (e == 0) {
        if (r >= m) {
            r = m;
        }
    }
    func_104BF8(&s->entries[slot].sample, b, (void *)c, (void *)r);
}
