/* LEVEL_07:0x1DC8A8 -- returns a scaled random float offset from a base value. */

int rand(void);

float func_1DC8A8(void)
{
    float r;
    float base;
    float scale;

    base = 0.8f;
    scale = 0.4000000357627869f;
    r = (float)rand() * 4.656612873077392578125e-10f;
    return r * scale + base;
}
