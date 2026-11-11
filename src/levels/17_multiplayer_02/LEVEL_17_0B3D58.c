/* LEVEL_17:0x0B3D58 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_001A2200;
extern float D_001A2204;
extern short D_001A2208;
extern int D_001A2198;
extern char D_001A218C;
extern int D_0019D048;
extern char D_0026A830[];
extern void func_0B3CA0(void);
extern void func_094BC0(void);
extern int func_0950B8(void);
extern int func_094DC8(void);
extern int func_094E28(void);
extern void func_094BD0(void);
extern void func_095828(float *a, float *b, float x, float y);
extern void func_0B40A8(short a, short b);
extern int func_092358(int a);
extern void func_019B98(void);
extern int func_094E80(void);
extern int func_019CA8(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0B3D58(void)
{
    float v[2];
    int r;
    int t;

    func_0B3CA0();
    func_094BC0();
    if (func_0950B8())
        func_094DC8();
    if (func_094E28()) {
        func_094BD0();
        v[1] = v[0] = 0.0f;
        func_095828(&v[0], &v[1], D_001A2200, D_001A2204);
        func_0B40A8((short)(int)v[0], (short)(int)v[1]);
        t = func_092358(D_0019D048);
        D_001A2208 = t;
        func_019B98();
        memset(D_0026A830, 0, 0x400);
        r = func_094E80();
        D_001A2198 = 0;
        if (r >= 0)
            D_001A2198 = func_019CA8(D_0026A830, r, 2, 1);
    }
    D_001A218C = 1;
}
