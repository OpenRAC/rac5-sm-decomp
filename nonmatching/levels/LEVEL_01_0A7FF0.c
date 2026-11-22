/* USA LEVEL_01.REL:0x0A7FF0, 320-byte candidate (21 November 2026).
 * Measured gnu-ee-trial -mno-check-zero-division: 17 differing words; first
 * difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Pair {
    int a;
    int b;
};

extern unsigned char D_001FBE18[];
extern unsigned char D_001FBE30[];
extern unsigned char D_001FBE48[];
extern struct Pair D_001FBE68[];

int func_0A7FF0(unsigned short code, unsigned char *out)
{
    unsigned int idx;
    unsigned int lead;
    unsigned int mid;
    unsigned int tail;
    unsigned char c;
    unsigned char v;
    unsigned char t;
    unsigned char *p;
    int n;

    if ((unsigned short)(code + 0x2854) < 0x2C) {
        code = (code & 0xFF) << 8;
    }
    if ((unsigned int)(code - 0x3131) < 0x33) {
        out[0] = code;
        return 1;
    }
    idx = (unsigned short)(code + 0x5400);
    if (idx < 0x2BA4) {
        tail = idx % 28;
        lead = idx / 28;
        mid = lead % 21;
        lead = lead / 21;
        t = D_001FBE48[tail];
        c = D_001FBE18[lead];
        v = D_001FBE30[mid];
        p = out;
        if (c != 0xFF) {
            out[0] = c;
            p = out + 1;
        }
        if (v != 0xFF) {
            *p = v;
            p++;
        }
        if (t != 0xFF) {
            *p = t;
            p++;
        }
        n = p - out;
        switch (n) {
        case 1:
            return 1;
        case 2:
            return D_001FBE68[mid].a;
        case 3:
            return D_001FBE68[mid].b;
        }
    }
    return 0;
}
