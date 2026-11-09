/* LEVEL_22:0x0B37B8 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_0015FF08;
extern float D_0015FF0C;
extern short D_0015FF10;
extern int D_0015FEA0;
extern char D_0015FE94;
extern int D_0015AE08;
extern char D_002811B0[];
extern void func_0B3700(void);
extern void func_094A58(void);
extern int func_0958F8(void);
extern void func_094CB0(void);
extern int func_094FC8(void);
extern void func_094A68(void);
extern void func_0962B0(float *a, float *b, float x, float y);
extern void func_0B43A8(short a, short b);
extern int func_092300(int a);
extern void func_0181C0(void);
extern int func_095050(void);
extern int func_0182D0(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0B37B8(void)
{
    float v[2];
    int r;
    int t;

    func_0B3700();
    func_094A58();
    if (func_0958F8())
        func_094CB0();
    if (func_094FC8()) {
        func_094A68();
        v[1] = v[0] = 0.0f;
        func_0962B0(&v[0], &v[1], D_0015FF08, D_0015FF0C);
        func_0B43A8((short)(int)v[0], (short)(int)v[1]);
        t = func_092300(D_0015AE08);
        D_0015FF10 = t;
        func_0181C0();
        memset(D_002811B0, 0, 0x400);
        r = func_095050();
        D_0015FEA0 = 0;
        if (r >= 0)
            D_0015FEA0 = func_0182D0(D_002811B0, r, 2, 1);
    }
    D_0015FE94 = 1;
}
