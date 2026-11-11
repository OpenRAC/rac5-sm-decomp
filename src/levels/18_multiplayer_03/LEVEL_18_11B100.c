/* LEVEL_18:0x11B100 -- placement copy of LEVEL_16_11C110.c: sets up a screen, then draws one of several labelled message lines. */
typedef struct { char pad0[0xC]; unsigned short h0C; char pad0E[2]; } S;
extern char D_001D1228[];
extern void func_099C40(float sx, float sy, float sz, short left, short top, short right, short bottom,
                        unsigned int t0, unsigned int t1, unsigned int t2, unsigned int t3);
extern void func_09C1A8(int a, unsigned b, float f);
extern void func_09BE08(int a, S *s, float f);
extern int func_114388(void);
extern int func_095D20(S *s);
extern char *func_10DFE0(int id);
extern char *func_114150(void);
extern void func_097E90(short a, short b, char *s);
extern void func_11B068(void);
extern int sprintf(char *buf, const char *fmt, ...);

void func_11B100(void)
{
    S st;
    char buf[64];

    func_099C40(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110,
                0x10000000u, 0x10000000u, 0x104D422Eu, 0x104D422Eu);
    func_09C1A8(0x3E, 0xFFFFFFFFu, 0.0f);
    func_09BE08(0x237, &st, 0.0f);
    if (!func_114388()) {
        func_097E90(func_095D20(&st), st.h0C, func_10DFE0(0x25E));
    } else {
        func_097E90(func_095D20(&st), st.h0C, func_114150());
    }
    func_11B068();
    func_09BE08(0x239, &st, 0.0f);
    if (func_114388()) {
        func_097E90(func_095D20(&st), st.h0C, func_10DFE0(0x264));
    } else {
        sprintf(buf, D_001D1228, func_10DFE0(0x1B7), func_10DFE0(0x1C4));
        func_097E90(func_095D20(&st), st.h0C, buf);
    }
}
