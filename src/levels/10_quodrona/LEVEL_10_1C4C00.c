/* LEVEL_10:0x1C4C00 -- placement copy of LEVEL_01_1B7378.c: tests whether the in-game clock is inside a fixed time window. */
extern unsigned int D_001FCFB8;
extern unsigned int D_00211CB4;
extern float D_00211CB0;
extern int D_00211CAC;
extern int D_00211CA8;

long long func_1C4C00(void)
{
    unsigned int d;
    float t;
    float el;
    int m0;
    int h0;
    int dm;
    int dh;
    int minute;
    int hour;
    int carry;
    long long result;

    d = D_001FCFB8 - D_00211CB4;
    el = (float)d * 0.033333335f;
    t = D_00211CB0 + el;
    m0 = D_00211CAC;
    h0 = D_00211CA8;
    dm = (int)(t * 0.016666668f);
    dh = (int)(t * 0.00027777778f);
    minute = (m0 + dm) % 60;
    carry = minute < m0;
    hour = (h0 + carry + dh) % 24;
    result = 0;
    if (hour == 2 && minute >= 42) {
        int in = minute < 48;
        result = in;
    }
    return result;
}
