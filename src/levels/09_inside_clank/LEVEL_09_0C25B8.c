/* LEVEL_09:0x0C25B8 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_001EA988;
extern float D_001EA98C;
extern short D_001EA990;
extern int D_001EA920;
extern char D_001EA914;
extern int D_001E5888;
extern char D_00312D70[];
extern void func_0C2500(void);
extern void func_0A36F8(void);
extern int func_0A4598(void);
extern void func_0A3950(void);
extern int func_0A3C68(void);
extern void func_0A3708(void);
extern void func_0A4F50(float *a, float *b, float x, float y);
extern void func_0C31A8(short a, short b);
extern int func_0A0FA0(int a);
extern void func_01AF98(void);
extern int func_0A3CF0(void);
extern int func_01B0A8(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0C25B8(void)
{
    float v[2];
    int r;
    int t;

    func_0C2500();
    func_0A36F8();
    if (func_0A4598())
        func_0A3950();
    if (func_0A3C68()) {
        func_0A3708();
        v[1] = v[0] = 0.0f;
        func_0A4F50(&v[0], &v[1], D_001EA988, D_001EA98C);
        func_0C31A8((short)(int)v[0], (short)(int)v[1]);
        t = func_0A0FA0(D_001E5888);
        D_001EA990 = t;
        func_01AF98();
        memset(D_00312D70, 0, 0x400);
        r = func_0A3CF0();
        D_001EA920 = 0;
        if (r >= 0)
            D_001EA920 = func_01B0A8(D_00312D70, r, 2, 1);
    }
    D_001EA914 = 1;
}
