/* LEVEL_07:0x0C7368 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_00214E88;
extern float D_00214E8C;
extern short D_00214E90;
extern int D_00214E20;
extern char D_00214E14;
extern int D_0020FD88;
extern char D_00340EF0[];
extern void func_0C72B0(void);
extern void func_0A8448(void);
extern int func_0A92E8(void);
extern void func_0A86A0(void);
extern int func_0A89B8(void);
extern void func_0A8458(void);
extern void func_0A9CA0(float *a, float *b, float x, float y);
extern void func_0C7F58(short a, short b);
extern int func_0A5CF0(int a);
extern void func_01C268(void);
extern int func_0A8A40(void);
extern int func_01C378(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0C7368(void)
{
    float v[2];
    int r;
    int t;

    func_0C72B0();
    func_0A8448();
    if (func_0A92E8())
        func_0A86A0();
    if (func_0A89B8()) {
        func_0A8458();
        v[1] = v[0] = 0.0f;
        func_0A9CA0(&v[0], &v[1], D_00214E88, D_00214E8C);
        func_0C7F58((short)(int)v[0], (short)(int)v[1]);
        t = func_0A5CF0(D_0020FD88);
        D_00214E90 = t;
        func_01C268();
        memset(D_00340EF0, 0, 0x400);
        r = func_0A8A40();
        D_00214E20 = 0;
        if (r >= 0)
            D_00214E20 = func_01C378(D_00340EF0, r, 2, 1);
    }
    D_00214E14 = 1;
}
