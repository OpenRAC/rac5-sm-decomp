/* LEVEL_07:0x1DC900 -- maps a small status code from a helper to one of four float levels. */

unsigned int func_018830(void);

float func_1DC900(void)
{
    int v;

    v = (int)func_018830();
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
