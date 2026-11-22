/* LEVEL_18:0x1894C0 -- placement copy of LEVEL_07_1DC8A8.c: returns a scaled random float offset from a base value. */

int rand(void);

float func_1894C0(void)
{
    float r;
    float base;
    float scale;

    base = 0.8f;
    scale = 0.4000000357627869f;
    r = (float)rand() * 4.656612873077392578125e-10f;
    return r * scale + base;
}
