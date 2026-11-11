/* LEVEL_15:0x0A5950 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_00155808;
extern float D_0015580C;
extern short D_00155810;
extern int D_001557A0;
extern char D_00155794;
extern int D_00150708;
extern char D_00242E30[];
extern void func_0A5898(void);
extern void func_086D10(void);
extern int func_087BB0(void);
extern void func_086F68(void);
extern int func_087280(void);
extern void func_086D20(void);
extern void func_088568(float *a, float *b, float x, float y);
extern void func_0A6540(short a, short b);
extern int func_0845E8(int a);
extern void func_017D90(void);
extern int func_087308(void);
extern int func_017EA0(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0A5950(void)
{
    float v[2];
    int r;
    int t;

    func_0A5898();
    func_086D10();
    if (func_087BB0())
        func_086F68();
    if (func_087280()) {
        func_086D20();
        v[1] = v[0] = 0.0f;
        func_088568(&v[0], &v[1], D_00155808, D_0015580C);
        func_0A6540((short)(int)v[0], (short)(int)v[1]);
        t = func_0845E8(D_00150708);
        D_00155810 = t;
        func_017D90();
        memset(D_00242E30, 0, 0x400);
        r = func_087308();
        D_001557A0 = 0;
        if (r >= 0)
            D_001557A0 = func_017EA0(D_00242E30, r, 2, 1);
    }
    D_00155794 = 1;
}
