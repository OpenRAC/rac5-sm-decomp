/* LEVEL_04:0x0BB890 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_00342DE0;
extern int D_00342DF0[];
extern char D_0022B830[];
extern char D_0022B840[];
extern char D_0022B850[];
extern char D_0022B860[];
extern char D_0022B870[];
extern char D_0022B880[];
extern char D_0022B890[];
extern char D_0022B8A0[];
extern char D_0022B8B0[];
extern char D_0022B8C0[];
extern char D_0022B8D8[];
extern char D_0022B8E8[];
extern char D_0022B8F8[];
extern char D_0022B908[];

int func_11A9B0(char *name);

void func_0BB890(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_00342DE0.w_00 = 0;
        D_00342DE0.w_04 = 0;
        D_00342DE0.w_08 = 0;
        D_00342DE0.f_0C = 1.0f;
        p = D_00342DF0;
        *p++ = func_11A9B0(D_0022B830);
        *p++ = func_11A9B0(D_0022B840);
        *p++ = func_11A9B0(D_0022B850);
        *p++ = func_11A9B0(D_0022B860);
        *p++ = func_11A9B0(D_0022B870);
        *p++ = func_11A9B0(D_0022B880);
        *p++ = func_11A9B0(D_0022B890);
        *p++ = func_11A9B0(D_0022B8A0);
        *p++ = func_11A9B0(D_0022B8B0);
        *p++ = func_11A9B0(D_0022B8C0);
        *p++ = func_11A9B0(D_0022B8D8);
        *p++ = func_11A9B0(D_0022B8E8);
        *p++ = func_11A9B0(D_0022B8F8);
        *p++ = func_11A9B0(D_0022B908);
    }
}
