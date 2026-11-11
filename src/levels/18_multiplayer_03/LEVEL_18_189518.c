/* LEVEL_18:0x189518 -- placement copy of LEVEL_07_1DC900.c: maps a small status code from a helper to one of four float levels. */

unsigned int func_015DB0(void);

float func_189518(void)
{
    int v;

    v = (int)func_015DB0();
    switch (v) {
    case 1:
        return 0.3330000042915344f;
    case 2:
        return 0.6660000085830688f;
    case 3:
        return 1.0f;
    default:
        return 0.0f;
    }
}
