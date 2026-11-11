/* LEVEL_15:0x096598 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_0023FE20;
extern int D_0023FE30[];
extern char D_00166630[];
extern char D_00166640[];
extern char D_00166650[];
extern char D_00166660[];
extern char D_00166670[];
extern char D_00166680[];
extern char D_00166690[];
extern char D_001666A0[];
extern char D_001666B0[];
extern char D_001666C0[];
extern char D_001666D8[];
extern char D_001666E8[];
extern char D_001666F8[];
extern char D_00166708[];

int func_0D4B98(char *name);

void func_096598(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_0023FE20.w_00 = 0;
        D_0023FE20.w_04 = 0;
        D_0023FE20.w_08 = 0;
        D_0023FE20.f_0C = 1.0f;
        p = D_0023FE30;
        *p++ = func_0D4B98(D_00166630);
        *p++ = func_0D4B98(D_00166640);
        *p++ = func_0D4B98(D_00166650);
        *p++ = func_0D4B98(D_00166660);
        *p++ = func_0D4B98(D_00166670);
        *p++ = func_0D4B98(D_00166680);
        *p++ = func_0D4B98(D_00166690);
        *p++ = func_0D4B98(D_001666A0);
        *p++ = func_0D4B98(D_001666B0);
        *p++ = func_0D4B98(D_001666C0);
        *p++ = func_0D4B98(D_001666D8);
        *p++ = func_0D4B98(D_001666E8);
        *p++ = func_0D4B98(D_001666F8);
        *p++ = func_0D4B98(D_00166708);
    }
}
