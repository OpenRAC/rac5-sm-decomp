/* LEVEL_10:0x1B3650 -- placement copy of LEVEL_04_1B2280.c: fills a 256-entry float table with a soft-float curve of the index, then creates the effect record and stores the handle. */
typedef struct {
    char pad00[0xBC];
    unsigned int fBC;
} Cfg;

extern float D_003A05A0[];
extern Cfg D_002A11C0;
extern int D_00211A74;

extern double func_1F4398(float x);
extern int func_1F3EC8(double a, double b);
extern double func_1F3938(double first, double second);
extern int func_1F39A0(int);
extern double func_1F38E0(double first, double second);
extern float func_1F40A8(double x);
extern int func_1B4398(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);

void func_1B3650(void)
{
    unsigned int i;
    double d;

    for (i = 0; i < 256; i++) {
        d = func_1F4398(128.0f - (float)i);
        if (func_1F3EC8(d, 0.0) < 0) {
            d = func_1F3938(0.0, d);
        }
        d = ((double (*)(double a, double b))func_1F39A0)(d, 0.00390625);
        d = func_1F38E0(d, 0.5);
        D_003A05A0[i] = func_1F40A8(d);
    }
    D_00211A74 = func_1B4398(0x10, D_002A11C0.fBC, 0, 0, 0, 1);
}
