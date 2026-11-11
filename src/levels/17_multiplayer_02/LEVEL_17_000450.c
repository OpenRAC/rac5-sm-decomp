/* LEVEL_17:000450 -- reads the a0-th float of the D_001B38B0 table when the
   index is inside the eight entries, zero otherwise. */
extern float D_001B38B0[];

float func_000450(int a0)
{
    float r;

    if (a0 < 8) {
        r = D_001B38B0[a0];
    } else {
        r = 0.0f;
    }
    return r;
}
