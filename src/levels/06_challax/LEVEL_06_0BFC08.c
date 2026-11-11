/* LEVEL_06:0x0BFC08 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_001EFA88;
extern float D_001EFA8C;
extern short D_001EFA90;
extern int D_001EFA20;
extern char D_001EFA14;
extern int D_001EA988;
extern char D_00318370[];
extern void func_0BFB50(void);
extern void func_0A0C18(void);
extern int func_0A1AB8(void);
extern void func_0A0E70(void);
extern int func_0A1188(void);
extern void func_0A0C28(void);
extern void func_0A2470(float *a, float *b, float x, float y);
extern void func_0C07F8(short a, short b);
extern int func_09E4C0(int a);
extern void func_01A3A8(void);
extern int func_0A1210(void);
extern int func_01A4B8(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0BFC08(void)
{
    float v[2];
    int r;
    int t;

    func_0BFB50();
    func_0A0C18();
    if (func_0A1AB8())
        func_0A0E70();
    if (func_0A1188()) {
        func_0A0C28();
        v[1] = v[0] = 0.0f;
        func_0A2470(&v[0], &v[1], D_001EFA88, D_001EFA8C);
        func_0C07F8((short)(int)v[0], (short)(int)v[1]);
        t = func_09E4C0(D_001EA988);
        D_001EFA90 = t;
        func_01A3A8();
        memset(D_00318370, 0, 0x400);
        r = func_0A1210();
        D_001EFA20 = 0;
        if (r >= 0)
            D_001EFA20 = func_01A4B8(D_00318370, r, 2, 1);
    }
    D_001EFA14 = 1;
}
