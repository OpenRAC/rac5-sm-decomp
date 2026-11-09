/* LEVEL_02:0x0BC998 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_0033FAE0;
extern int D_0033FAF0[];
extern char D_00226E30[];
extern char D_00226E40[];
extern char D_00226E50[];
extern char D_00226E60[];
extern char D_00226E70[];
extern char D_00226E80[];
extern char D_00226E90[];
extern char D_00226EA0[];
extern char D_00226EB0[];
extern char D_00226EC0[];
extern char D_00226ED8[];
extern char D_00226EE8[];
extern char D_00226EF8[];
extern char D_00226F08[];

int func_115790(char *name);

void func_0BC998(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_0033FAE0.w_00 = 0;
        D_0033FAE0.w_04 = 0;
        D_0033FAE0.w_08 = 0;
        D_0033FAE0.f_0C = 1.0f;
        p = D_0033FAF0;
        *p++ = func_115790(D_00226E30);
        *p++ = func_115790(D_00226E40);
        *p++ = func_115790(D_00226E50);
        *p++ = func_115790(D_00226E60);
        *p++ = func_115790(D_00226E70);
        *p++ = func_115790(D_00226E80);
        *p++ = func_115790(D_00226E90);
        *p++ = func_115790(D_00226EA0);
        *p++ = func_115790(D_00226EB0);
        *p++ = func_115790(D_00226EC0);
        *p++ = func_115790(D_00226ED8);
        *p++ = func_115790(D_00226EE8);
        *p++ = func_115790(D_00226EF8);
        *p++ = func_115790(D_00226F08);
    }
}
