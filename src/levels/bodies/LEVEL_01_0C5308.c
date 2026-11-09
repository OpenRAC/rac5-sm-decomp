/* LEVEL_01:0x0C5308 -- sets up the picker state once and records that it is ready. */
extern float D_00200B88;
extern float D_00200B8C;
extern short D_00200B90;
extern int D_00200B20;
extern char D_00200B14;
extern int D_001FBA88;
extern char D_0032B5F0[];
extern void func_0C5250(void);
extern void func_0A6448(void);
extern int func_0A72E8(void);
extern void func_0A66A0(void);
extern int func_0A69B8(void);
extern void func_0A6458(void);
extern void func_0A7CA0(float *a, float *b, float x, float y);
extern void func_0C5EF8(short a, short b);
extern int func_0A3CF0(int a);
extern void func_01BBA8(void);
extern int func_0A6A40(void);
extern int func_01BCB8(char *buf, int a, int b, int c);
extern void *memset(void *p, int c, unsigned int n);

void func_0C5308(void)
{
    float v[2];
    int r;
    int t;

    func_0C5250();
    func_0A6448();
    if (func_0A72E8())
        func_0A66A0();
    if (func_0A69B8()) {
        func_0A6458();
        v[1] = v[0] = 0.0f;
        func_0A7CA0(&v[0], &v[1], D_00200B88, D_00200B8C);
        func_0C5EF8((short)(int)v[0], (short)(int)v[1]);
        t = func_0A3CF0(D_001FBA88);
        D_00200B90 = t;
        func_01BBA8();
        memset(D_0032B5F0, 0, 0x400);
        r = func_0A6A40();
        D_00200B20 = 0;
        if (r >= 0)
            D_00200B20 = func_01BCB8(D_0032B5F0, r, 2, 1);
    }
    D_00200B14 = 1;
}
