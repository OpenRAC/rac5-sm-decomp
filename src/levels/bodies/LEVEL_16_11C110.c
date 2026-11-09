/* LEVEL_16:0x11C110 -- sets up a screen, then draws one of several labelled message lines. */
typedef struct { char pad0[0xC]; unsigned short h0C; char pad0E[2]; } S;
extern char D_001CFCA8[];
extern void func_09AC30(float sx, float sy, float sz, short left, short top, short right, short bottom,
                        unsigned int t0, unsigned int t1, unsigned int t2, unsigned int t3);
extern void func_09D198(int a, unsigned b, float f);
extern void func_09CDF8(int a, S *s, float f);
extern int func_1155E0(void);
extern int func_096D10(S *s);
extern char *func_10F330(int id);
extern char *func_1153B0(void);
extern void func_098E80(short a, short b, char *s);
extern void func_11C078(void);
extern int sprintf(char *buf, const char *fmt, ...);

void func_11C110(void)
{
    S st;
    char buf[64];

    func_09AC30(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110,
                0x10000000u, 0x10000000u, 0x104D422Eu, 0x104D422Eu);
    func_09D198(0x3E, 0xFFFFFFFFu, 0.0f);
    func_09CDF8(0x237, &st, 0.0f);
    if (!func_1155E0()) {
        func_098E80(func_096D10(&st), st.h0C, func_10F330(0x25E));
    } else {
        func_098E80(func_096D10(&st), st.h0C, func_1153B0());
    }
    func_11C078();
    func_09CDF8(0x239, &st, 0.0f);
    if (func_1155E0()) {
        func_098E80(func_096D10(&st), st.h0C, func_10F330(0x264));
    } else {
        sprintf(buf, D_001CFCA8, func_10F330(0x1B7), func_10F330(0x1C4));
        func_098E80(func_096D10(&st), st.h0C, buf);
    }
}
