/* LEVEL_20:0x0EE4B8 -- placement copy of LEVEL_16_11C110.c: sets up a screen, then draws one of several labelled message lines. */
typedef struct { char pad0[0xC]; unsigned short h0C; char pad0E[2]; } S;
extern char D_00130D18[];
extern void func_085328(float sx, float sy, float sz, short left, short top, short right, short bottom,
                        unsigned int t0, unsigned int t1, unsigned int t2, unsigned int t3);
extern void func_087890(int a, unsigned b, float f);
extern void func_0874F0(int a, S *s, float f);
extern int func_0E7EE0(void);
extern int func_081408(S *s);
extern char *func_0E2118(int id);
extern char *func_0E7CF8(void);
extern void func_083578(short a, short b, char *s);
extern void func_0EE420(void);
extern int sprintf(char *buf, const char *fmt, ...);

void func_0EE4B8(void)
{
    S st;
    char buf[64];

    func_085328(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110,
                0x10000000u, 0x10000000u, 0x104D422Eu, 0x104D422Eu);
    func_087890(0x3E, 0xFFFFFFFFu, 0.0f);
    func_0874F0(0x237, &st, 0.0f);
    if (!func_0E7EE0()) {
        func_083578(func_081408(&st), st.h0C, func_0E2118(0x25E));
    } else {
        func_083578(func_081408(&st), st.h0C, func_0E7CF8());
    }
    func_0EE420();
    func_0874F0(0x239, &st, 0.0f);
    if (func_0E7EE0()) {
        func_083578(func_081408(&st), st.h0C, func_0E2118(0x264));
    } else {
        sprintf(buf, D_00130D18, func_0E2118(0x1B7), func_0E2118(0x1C4));
        func_083578(func_081408(&st), st.h0C, buf);
    }
}
