/* LEVEL_03:0x0B5E70 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_00343460;
extern int D_00343470[];
extern char D_0022ADB0[];
extern char D_0022ADC0[];
extern char D_0022ADD0[];
extern char D_0022ADE0[];
extern char D_0022ADF0[];
extern char D_0022AE00[];
extern char D_0022AE10[];
extern char D_0022AE20[];
extern char D_0022AE30[];
extern char D_0022AE40[];
extern char D_0022AE58[];
extern char D_0022AE68[];
extern char D_0022AE78[];
extern char D_0022AE88[];

int func_10D110(char *name);

void func_0B5E70(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_00343460.w_00 = 0;
        D_00343460.w_04 = 0;
        D_00343460.w_08 = 0;
        D_00343460.f_0C = 1.0f;
        p = D_00343470;
        *p++ = func_10D110(D_0022ADB0);
        *p++ = func_10D110(D_0022ADC0);
        *p++ = func_10D110(D_0022ADD0);
        *p++ = func_10D110(D_0022ADE0);
        *p++ = func_10D110(D_0022ADF0);
        *p++ = func_10D110(D_0022AE00);
        *p++ = func_10D110(D_0022AE10);
        *p++ = func_10D110(D_0022AE20);
        *p++ = func_10D110(D_0022AE30);
        *p++ = func_10D110(D_0022AE40);
        *p++ = func_10D110(D_0022AE58);
        *p++ = func_10D110(D_0022AE68);
        *p++ = func_10D110(D_0022AE78);
        *p++ = func_10D110(D_0022AE88);
    }
}
