/* LEVEL_10:0x0B7260 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_003319E0;
extern int D_003319F0[];
extern char D_0021AE30[];
extern char D_0021AE40[];
extern char D_0021AE50[];
extern char D_0021AE60[];
extern char D_0021AE70[];
extern char D_0021AE80[];
extern char D_0021AE90[];
extern char D_0021AEA0[];
extern char D_0021AEB0[];
extern char D_0021AEC0[];
extern char D_0021AED8[];
extern char D_0021AEE8[];
extern char D_0021AEF8[];
extern char D_0021AF08[];

int func_10D660(char *name);

void func_0B7260(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_003319E0.w_00 = 0;
        D_003319E0.w_04 = 0;
        D_003319E0.w_08 = 0;
        D_003319E0.f_0C = 1.0f;
        p = D_003319F0;
        *p++ = func_10D660(D_0021AE30);
        *p++ = func_10D660(D_0021AE40);
        *p++ = func_10D660(D_0021AE50);
        *p++ = func_10D660(D_0021AE60);
        *p++ = func_10D660(D_0021AE70);
        *p++ = func_10D660(D_0021AE80);
        *p++ = func_10D660(D_0021AE90);
        *p++ = func_10D660(D_0021AEA0);
        *p++ = func_10D660(D_0021AEB0);
        *p++ = func_10D660(D_0021AEC0);
        *p++ = func_10D660(D_0021AED8);
        *p++ = func_10D660(D_0021AEE8);
        *p++ = func_10D660(D_0021AEF8);
        *p++ = func_10D660(D_0021AF08);
    }
}
