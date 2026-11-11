/* LEVEL_07:0x0B80E8 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_0033DEE0;
extern int D_0033DEF0[];
extern char D_00226BB0[];
extern char D_00226BC0[];
extern char D_00226BD0[];
extern char D_00226BE0[];
extern char D_00226BF0[];
extern char D_00226C00[];
extern char D_00226C10[];
extern char D_00226C20[];
extern char D_00226C30[];
extern char D_00226C40[];
extern char D_00226C58[];
extern char D_00226C68[];
extern char D_00226C78[];
extern char D_00226C88[];

int func_112498(char *name);

void func_0B80E8(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_0033DEE0.w_00 = 0;
        D_0033DEE0.w_04 = 0;
        D_0033DEE0.w_08 = 0;
        D_0033DEE0.f_0C = 1.0f;
        p = D_0033DEF0;
        *p++ = func_112498(D_00226BB0);
        *p++ = func_112498(D_00226BC0);
        *p++ = func_112498(D_00226BD0);
        *p++ = func_112498(D_00226BE0);
        *p++ = func_112498(D_00226BF0);
        *p++ = func_112498(D_00226C00);
        *p++ = func_112498(D_00226C10);
        *p++ = func_112498(D_00226C20);
        *p++ = func_112498(D_00226C30);
        *p++ = func_112498(D_00226C40);
        *p++ = func_112498(D_00226C58);
        *p++ = func_112498(D_00226C68);
        *p++ = func_112498(D_00226C78);
        *p++ = func_112498(D_00226C88);
    }
}
