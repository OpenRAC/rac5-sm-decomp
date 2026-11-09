/* LEVEL_06:0x0B08B0 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_00315360;
extern int D_00315370[];
extern char D_00200D30[];
extern char D_00200D40[];
extern char D_00200D50[];
extern char D_00200D60[];
extern char D_00200D70[];
extern char D_00200D80[];
extern char D_00200D90[];
extern char D_00200DA0[];
extern char D_00200DB0[];
extern char D_00200DC0[];
extern char D_00200DD8[];
extern char D_00200DE8[];
extern char D_00200DF8[];
extern char D_00200E08[];

int func_105A18(char *name);

void func_0B08B0(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_00315360.w_00 = 0;
        D_00315360.w_04 = 0;
        D_00315360.w_08 = 0;
        D_00315360.f_0C = 1.0f;
        p = D_00315370;
        *p++ = func_105A18(D_00200D30);
        *p++ = func_105A18(D_00200D40);
        *p++ = func_105A18(D_00200D50);
        *p++ = func_105A18(D_00200D60);
        *p++ = func_105A18(D_00200D70);
        *p++ = func_105A18(D_00200D80);
        *p++ = func_105A18(D_00200D90);
        *p++ = func_105A18(D_00200DA0);
        *p++ = func_105A18(D_00200DB0);
        *p++ = func_105A18(D_00200DC0);
        *p++ = func_105A18(D_00200DD8);
        *p++ = func_105A18(D_00200DE8);
        *p++ = func_105A18(D_00200DF8);
        *p++ = func_105A18(D_00200E08);
    }
}
