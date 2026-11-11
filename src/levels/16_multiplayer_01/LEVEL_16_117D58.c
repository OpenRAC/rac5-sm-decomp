/* LEVEL_16:0x117D58 -- sums scaled unsigned fields of a by-value record according to the current mode. */
typedef struct {
    unsigned int w00;
    unsigned int w04;
    unsigned int w08;
    unsigned int w0C;
    unsigned int w10;
    unsigned int w14;
    unsigned int w18;
    unsigned int w1C;
    unsigned int w20;
    unsigned int w24;
    unsigned int w28;
    unsigned int w2C;
    unsigned int w30;
    unsigned int w34;
    unsigned int w38;
    unsigned int w3C;
    unsigned char pad40[0xC0 - 0x40];
} Rec;

extern int D_001D04A0;
extern int func_112E00(void);

float func_117D58(Rec s)
{
    float f;

    f = 0.0f;
    if (func_112E00() == 1) {
        f += (float)(s.w0C * 3);
        f -= (float)s.w14;
        f -= (float)(s.w10 * 2);
    } else if (func_112E00() == 2) {
        f += (float)(s.w0C * 2);
        f -= (float)s.w14;
        f -= (float)(s.w10 * 2);
        f += (float)(s.w18 * 4);
        f += (float)(s.w1C * 2);
    } else if (func_112E00() == 0) {
        f += (float)(s.w0C * 2);
        f -= (float)s.w14;
        f -= (float)(s.w10 * 2);
        if (D_001D04A0 == 0x10) {
            f += (float)(s.w04 * 4);
            f -= (float)(s.w08 * 2);
        } else if (D_001D04A0 == 0x11) {
            f += (float)(s.w24 * 2);
            f += (float)(s.w28 * 4);
        } else if (D_001D04A0 == 0x12) {
            f += (float)(s.w34 * 2);
            f += (float)(s.w3C * 2);
        } else if (D_001D04A0 == 0x13) {
            f += (float)s.w2C;
            f += (float)(s.w30 * 4);
        }
    }
    return f;
}
