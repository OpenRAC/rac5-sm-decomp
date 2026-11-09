/* LEVEL_04:0x194608 -- advances a timer and evaluates a piecewise ease curve. */
struct T { char pad[0x70]; float t; };

int func_194608(struct T *o, float *out)
{
    float t;
    float u;

    t = o->t + 1.0f;
    o->t = t;
    if (t >= 130.83750915527344f) {
        return 1;
    }
    if (t < 15.0f) {
        *out = t * t * 0.000387851003324613f;
    } else if (t < 115.83750915527344f) {
        *out = (t - 15.0f) * 0.011635529808700085f + 0.0872664749622345f;
    } else {
        u = 130.83750915527344f - t;
        *out = 1.3478307723999023f - u * u * 0.000387851003324613f;
    }
    return 0;
}
