/* LEVEL_04:0x1B2280 -- fills a 256-entry float table with a soft-float curve of the index, then creates the effect record and stores the handle. */
typedef struct {
    char pad00[0xBC];
    unsigned int fBC;
} Cfg;

extern float D_003B1CF8[];
extern Cfg D_002B25C0;
extern int D_0022231C;

extern double func_204500(float x);
extern int func_204030(double a, double b);
extern double func_203AA0(double first, double second);
extern int func_203B08(int);
extern double func_203A48(double first, double second);
extern float func_204210(double x);
extern int func_1B2FC8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);

void func_1B2280(void)
{
    unsigned int i;
    double d;

    for (i = 0; i < 256; i++) {
        d = func_204500(128.0f - (float)i);
        if (func_204030(d, 0.0) < 0) {
            d = func_203AA0(0.0, d);
        }
        d = ((double (*)(double a, double b))func_203B08)(d, 0.00390625);
        d = func_203A48(d, 0.5);
        D_003B1CF8[i] = func_204210(d);
    }
    D_0022231C = func_1B2FC8(0x10, D_002B25C0.fBC, 0, 0, 0, 1);
}
