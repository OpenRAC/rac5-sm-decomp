/* LEVEL_17:0x11BA88 -- placement copy of LEVEL_16_11C110.c: sets up a screen, then draws one of several labelled message lines. */
typedef struct { char pad0[0xC]; unsigned short h0C; char pad0E[2]; } S;
extern char D_001C3128[];
extern void func_09A128(float sx, float sy, float sz, short left, short top, short right, short bottom,
                        unsigned int t0, unsigned int t1, unsigned int t2, unsigned int t3);
extern void func_09C690(int a, unsigned b, float f);
extern void func_09C2F0(int a, S *s, float f);
extern int func_114D40(void);
extern int func_096208(S *s);
extern char *func_10E8A8(int id);
extern char *func_114B10(void);
extern void func_098378(short a, short b, char *s);
extern void func_11B9F0(void);
extern int sprintf(char *buf, const char *fmt, ...);

void func_11BA88(void)
{
    S st;
    char buf[64];

    func_09A128(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110,
                0x10000000u, 0x10000000u, 0x104D422Eu, 0x104D422Eu);
    func_09C690(0x3E, 0xFFFFFFFFu, 0.0f);
    func_09C2F0(0x237, &st, 0.0f);
    if (!func_114D40()) {
        func_098378(func_096208(&st), st.h0C, func_10E8A8(0x25E));
    } else {
        func_098378(func_096208(&st), st.h0C, func_114B10());
    }
    func_11B9F0();
    func_09C2F0(0x239, &st, 0.0f);
    if (func_114D40()) {
        func_098378(func_096208(&st), st.h0C, func_10E8A8(0x264));
    } else {
        sprintf(buf, D_001C3128, func_10E8A8(0x1B7), func_10E8A8(0x1C4));
        func_098378(func_096208(&st), st.h0C, buf);
    }
}
