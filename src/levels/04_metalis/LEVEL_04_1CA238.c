/* LEVEL_04:0x1CA238 -- placement copy of LEVEL_01_1B7378.c: tests whether the in-game clock is inside a fixed time window. */
extern unsigned int D_0020D138;
extern unsigned int D_002226B4;
extern float D_002226B0;
extern int D_002226AC;
extern int D_002226A8;

long long func_1CA238(void)
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

    d = D_0020D138 - D_002226B4;
    el = (float)d * 0.033333335f;
    t = D_002226B0 + el;
    m0 = D_002226AC;
    h0 = D_002226A8;
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
