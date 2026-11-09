/* LEVEL_19:0x0B40F0 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_001AFD80;
extern float D_001AFD84;
extern short D_001AFD88;
extern int D_001AFD18;
extern char D_001AFD0C;
extern int D_001AABC8;
extern char D_002796B0[];
extern void func_0B4038(void);
extern void func_094F58(void);
extern int func_095450(void);
extern void func_095160(void);
extern int func_0951C0(void);
extern void func_094F68(void);
extern void func_095BC0(float *a, float *b, float x, float y);
extern void func_0B4440(short a, short b);
extern int func_0926F0(int a);
extern void func_019F18(void);
extern int func_095218(void);
extern int func_01A028(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0B40F0(void)
{
    float v[2];
    int r;
    int t;

    func_0B4038();
    func_094F58();
    if (func_095450())
        func_095160();
    if (func_0951C0()) {
        func_094F68();
        v[1] = v[0] = 0.0f;
        func_095BC0(&v[0], &v[1], D_001AFD80, D_001AFD84);
        func_0B4440((short)(int)v[0], (short)(int)v[1]);
        t = func_0926F0(D_001AABC8);
        D_001AFD88 = t;
        func_019F18();
        memset(D_002796B0, 0, 0x400);
        r = func_095218();
        D_001AFD18 = 0;
        if (r >= 0)
            D_001AFD18 = func_01A028(D_002796B0, r, 2, 1);
    }
    D_001AFD0C = 1;
}
