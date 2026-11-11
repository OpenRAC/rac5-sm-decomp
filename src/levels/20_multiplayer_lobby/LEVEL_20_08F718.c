/* LEVEL_20:0x08F718 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_00199D60;
extern int D_00199D70[];
extern char D_00127C60[];
extern char D_00127C70[];
extern char D_00127C80[];
extern char D_00127C90[];
extern char D_00127CA0[];
extern char D_00127CB0[];
extern char D_00127CC0[];
extern char D_00127CD0[];
extern char D_00127CE0[];
extern char D_00127CF0[];
extern char D_00127D08[];
extern char D_00127D18[];
extern char D_00127D28[];
extern char D_00127D38[];

int func_0CA280(char *name);

void func_08F718(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_00199D60.w_00 = 0;
        D_00199D60.w_04 = 0;
        D_00199D60.w_08 = 0;
        D_00199D60.f_0C = 1.0f;
        p = D_00199D70;
        *p++ = func_0CA280(D_00127C60);
        *p++ = func_0CA280(D_00127C70);
        *p++ = func_0CA280(D_00127C80);
        *p++ = func_0CA280(D_00127C90);
        *p++ = func_0CA280(D_00127CA0);
        *p++ = func_0CA280(D_00127CB0);
        *p++ = func_0CA280(D_00127CC0);
        *p++ = func_0CA280(D_00127CD0);
        *p++ = func_0CA280(D_00127CE0);
        *p++ = func_0CA280(D_00127CF0);
        *p++ = func_0CA280(D_00127D08);
        *p++ = func_0CA280(D_00127D18);
        *p++ = func_0CA280(D_00127D28);
        *p++ = func_0CA280(D_00127D38);
    }
}
