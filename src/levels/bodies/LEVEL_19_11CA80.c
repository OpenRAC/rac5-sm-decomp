/* LEVEL_19:0x11CA80 -- placement copy of LEVEL_16_11C110.c: sets up a screen, then draws one of several labelled message lines. */
typedef struct { char pad0[0xC]; unsigned short h0C; char pad0E[2]; } S;
extern char D_001D0EA8[];
extern void func_09A4C0(float sx, float sy, float sz, short left, short top, short right, short bottom,
                        unsigned int t0, unsigned int t1, unsigned int t2, unsigned int t3);
extern void func_09CA28(int a, unsigned b, float f);
extern void func_09C688(int a, S *s, float f);
extern int func_115D58(void);
extern int func_0965A0(S *s);
extern char *func_10F9D0(int id);
extern char *func_115B28(void);
extern void func_098710(short a, short b, char *s);
extern void func_11C9E8(void);
extern int sprintf(char *buf, const char *fmt, ...);

void func_11CA80(void)
{
    S st;
    char buf[64];

    func_09A4C0(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110,
                0x10000000u, 0x10000000u, 0x104D422Eu, 0x104D422Eu);
    func_09CA28(0x3E, 0xFFFFFFFFu, 0.0f);
    func_09C688(0x237, &st, 0.0f);
    if (!func_115D58()) {
        func_098710(func_0965A0(&st), st.h0C, func_10F9D0(0x25E));
    } else {
        func_098710(func_0965A0(&st), st.h0C, func_115B28());
    }
    func_11C9E8();
    func_09C688(0x239, &st, 0.0f);
    if (func_115D58()) {
        func_098710(func_0965A0(&st), st.h0C, func_10F9D0(0x264));
    } else {
        sprintf(buf, D_001D0EA8, func_10F9D0(0x1B7), func_10F9D0(0x1C4));
        func_098710(func_0965A0(&st), st.h0C, buf);
    }
}
