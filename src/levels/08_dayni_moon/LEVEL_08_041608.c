/* LEVEL_08:0x041608 -- placement copy of LEVEL_01_03C520.c: rejects codes outside 0x28-0x33 and records whose state is 0x29-0x32, otherwise flags the optional sub-record, stores the code and refreshes the record. */
typedef struct {
    char pad_00[0x64];
    unsigned int w_64;
} Sub;

typedef struct {
    char pad_00[0x100];
    unsigned short h_100;
    unsigned short h_102;
    char pad_104[0x498];
    Sub *p_59C;
} Rec;

extern void func_025D18(void);
extern void func_0442A0(Rec *r);

static __inline__ int OutOfRange(int v, int lo, int hi)
{
    return v > hi || v < lo;
}

void func_041608(Rec *r, int code)
{
    Sub *sub;
    unsigned char out;

    func_025D18();
    out = OutOfRange(code, 0x28, 0x33);
    if (out) {
        return;
    }
    if ((unsigned int)(r->h_100 - 0x29) < 0xA) {
        return;
    }
    sub = r->p_59C;
    if (sub != 0) {
        sub->w_64 |= 8;
    }
    r->h_102 = code;
    func_0442A0(r);
}
