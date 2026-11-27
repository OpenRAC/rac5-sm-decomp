/* LEVEL_01:0x1B7378 -- tests whether the in-game clock is inside a fixed time window. */
extern unsigned int D_001F3FB8;
extern unsigned int D_00208E5C;
extern float D_00208E58;
extern int D_00208E54;
extern int D_00208E50;

long long func_1B7378(void)
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

    d = D_001F3FB8 - D_00208E5C;
    el = (float)d * 0.033333335f;
    t = D_00208E58 + el;
    m0 = D_00208E54;
    h0 = D_00208E50;
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
