/* LEVEL_08:0x1D90F8 -- placement copy of LEVEL_04_1B2280.c: fills a 256-entry float table with a soft-float curve of the index, then creates the effect record and stores the handle. */
typedef struct {
    char pad00[0xBC];
    unsigned int fBC;
} Cfg;

extern float D_003E8DE0[];
extern Cfg D_002E7040;
extern int D_00252394;

extern double func_233EC8(float x);
extern int func_2339F8(double a, double b);
extern double func_233468(double first, double second);
extern int func_2334D0(int);
extern double func_233410(double first, double second);
extern float func_233BD8(double x);
extern int func_1D9E40(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);

void func_1D90F8(void)
{
    unsigned int i;
    double d;

    for (i = 0; i < 256; i++) {
        d = func_233EC8(128.0f - (float)i);
        if (func_2339F8(d, 0.0) < 0) {
            d = func_233468(0.0, d);
        }
        d = ((double (*)(double a, double b))func_2334D0)(d, 0.00390625);
        d = func_233410(d, 0.5);
        D_003E8DE0[i] = func_233BD8(d);
    }
    D_00252394 = func_1D9E40(0x10, D_002E7040.fBC, 0, 0, 0, 1);
}
