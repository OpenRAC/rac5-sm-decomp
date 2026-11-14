/* LEVEL_10:0x016058 -- placement copy of LEVEL_01_015E80.c: picks the lower bound for the current global mode (1: -4.915, 0x10: 0.0, otherwise fails); fails when it is above the limit, otherwise stores it through the optional pointer and succeeds. */
extern int D_00223780;

int func_016058(float limit, float *out)
{
    float bound;

    switch (D_00223780) {
    case 1:
        bound = -4.915f;
    test:
        if (limit <= bound) {
            if (out != 0)
                *out = bound;
            return 1;
        }
        break;
    case 0x10:
        bound = 0.0f;
        goto test;
    }
    return 0;
}
