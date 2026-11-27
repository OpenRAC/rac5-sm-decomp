/* LEVEL_03:0x1CC468 -- placement copy of LEVEL_01_1B7378.c: tests whether the in-game clock is inside a fixed time window. */
extern unsigned int D_0020C638;
extern unsigned int D_00221E1C;
extern float D_00221E18;
extern int D_00221E14;
extern int D_00221E10;

long long func_1CC468(void)
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

    d = D_0020C638 - D_00221E1C;
    el = (float)d * 0.033333335f;
    t = D_00221E18 + el;
    m0 = D_00221E14;
    h0 = D_00221E10;
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
