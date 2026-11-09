/* LEVEL_06:0x187DF8 -- maps a small status code from a helper to one of four float constants. */

extern int func_016970(void);

float func_187DF8(void) {
    int v;
    float r;

    v = func_016970();
    switch (v) {
    case 1:
        r = 0.6660000085830688f;
        break;
    case 2:
        r = 1.3329999446868896f;
        break;
    case 3:
        r = 2.0f;
        break;
    default:
        r = 0.0f;
        break;
    }
    return r;
}
