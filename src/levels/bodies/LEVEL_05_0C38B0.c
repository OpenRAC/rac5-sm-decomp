/* LEVEL_05:0x0C38B0 -- placement copy of LEVEL_01_0C5308.c: sets up the picker state once and records that it is ready. */
extern float D_001EFF08;
extern float D_001EFF0C;
extern short D_001EFF10;
extern int D_001EFEA0;
extern char D_001EFE94;
extern int D_001EAE08;
extern char D_003174B0[];
extern void func_0C37F8(void);
extern void func_0A4A08(void);
extern int func_0A58A8(void);
extern void func_0A4C60(void);
extern int func_0A4F78(void);
extern void func_0A4A18(void);
extern void func_0A6260(float *a, float *b, float x, float y);
extern void func_0C44A0(short a, short b);
extern int func_0A22B0(int a);
extern void func_01B140(void);
extern int func_0A5000(void);
extern int func_01B250(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0C38B0(void)
{
    float v[2];
    int r;
    int t;

    func_0C37F8();
    func_0A4A08();
    if (func_0A58A8())
        func_0A4C60();
    if (func_0A4F78()) {
        func_0A4A18();
        v[1] = v[0] = 0.0f;
        func_0A6260(&v[0], &v[1], D_001EFF08, D_001EFF0C);
        func_0C44A0((short)(int)v[0], (short)(int)v[1]);
        t = func_0A22B0(D_001EAE08);
        D_001EFF10 = t;
        func_01B140();
        memset(D_003174B0, 0, 0x400);
        r = func_0A5000();
        D_001EFEA0 = 0;
        if (r >= 0)
            D_001EFEA0 = func_01B250(D_003174B0, r, 2, 1);
    }
    D_001EFE94 = 1;
}
