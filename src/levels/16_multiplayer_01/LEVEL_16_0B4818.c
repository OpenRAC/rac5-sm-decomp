/* LEVEL_16:0x0B4818 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_001AEC00;
extern float D_001AEC04;
extern short D_001AEC08;
extern int D_001AEB98;
extern char D_001AEB8C;
extern int D_001A9A48;
extern char D_00279530[];
extern void func_0B4760(void);
extern void func_0956C8(void);
extern int func_095BC0(void);
extern int func_0958D0(void);
extern int func_095930(void);
extern void func_0956D8(void);
extern void func_096330(float *a, float *b, float x, float y);
extern void func_0B4B68(short a, short b);
extern int func_092E60(int a);
extern void func_01A218(void);
extern int func_095988(void);
extern int func_01A328(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0B4818(void)
{
    float v[2];
    int r;
    int t;

    func_0B4760();
    func_0956C8();
    if (func_095BC0())
        func_0958D0();
    if (func_095930()) {
        func_0956D8();
        v[1] = v[0] = 0.0f;
        func_096330(&v[0], &v[1], D_001AEC00, D_001AEC04);
        func_0B4B68((short)(int)v[0], (short)(int)v[1]);
        t = func_092E60(D_001A9A48);
        D_001AEC08 = t;
        func_01A218();
        memset(D_00279530, 0, 0x400);
        r = func_095988();
        D_001AEB98 = 0;
        if (r >= 0)
            D_001AEB98 = func_01A328(D_00279530, r, 2, 1);
    }
    D_001AEB8C = 1;
}
