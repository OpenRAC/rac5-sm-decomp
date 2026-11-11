/* LEVEL_18:0x0B37F0 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_001B0080;
extern float D_001B0084;
extern short D_001B0088;
extern int D_001B0018;
extern char D_001B000C;
extern int D_001AAEC8;
extern char D_002798B0[];
extern void func_0B3738(void);
extern void func_0946D8(void);
extern int func_094BD0(void);
extern int func_0948E0(void);
extern int func_094940(void);
extern void func_0946E8(void);
extern void func_095340(float *a, float *b, float x, float y);
extern void func_0B3B40(short a, short b);
extern int func_091E70(int a);
extern void func_019860(void);
extern int func_094998(void);
extern int func_019970(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0B37F0(void)
{
    float v[2];
    int r;
    int t;

    func_0B3738();
    func_0946D8();
    if (func_094BD0())
        func_0948E0();
    if (func_094940()) {
        func_0946E8();
        v[1] = v[0] = 0.0f;
        func_095340(&v[0], &v[1], D_001B0080, D_001B0084);
        func_0B3B40((short)(int)v[0], (short)(int)v[1]);
        t = func_091E70(D_001AAEC8);
        D_001B0088 = t;
        func_019860();
        memset(D_002798B0, 0, 0x400);
        r = func_094998();
        D_001B0018 = 0;
        if (r >= 0)
            D_001B0018 = func_019970(D_002798B0, r, 2, 1);
    }
    D_001B000C = 1;
}
