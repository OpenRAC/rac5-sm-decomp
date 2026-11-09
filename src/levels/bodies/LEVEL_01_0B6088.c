/* LEVEL_01:0x0B6088 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_003285E0;
extern int D_003285F0[];
extern char D_00211EB0[];
extern char D_00211EC0[];
extern char D_00211ED0[];
extern char D_00211EE0[];
extern char D_00211EF0[];
extern char D_00211F00[];
extern char D_00211F10[];
extern char D_00211F20[];
extern char D_00211F30[];
extern char D_00211F40[];
extern char D_00211F58[];
extern char D_00211F68[];
extern char D_00211F78[];
extern char D_00211F88[];

int func_10F448(char *name);

void func_0B6088(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_003285E0.w_00 = 0;
        D_003285E0.w_04 = 0;
        D_003285E0.w_08 = 0;
        D_003285E0.f_0C = 1.0f;
        p = D_003285F0;
        *p++ = func_10F448(D_00211EB0);
        *p++ = func_10F448(D_00211EC0);
        *p++ = func_10F448(D_00211ED0);
        *p++ = func_10F448(D_00211EE0);
        *p++ = func_10F448(D_00211EF0);
        *p++ = func_10F448(D_00211F00);
        *p++ = func_10F448(D_00211F10);
        *p++ = func_10F448(D_00211F20);
        *p++ = func_10F448(D_00211F30);
        *p++ = func_10F448(D_00211F40);
        *p++ = func_10F448(D_00211F58);
        *p++ = func_10F448(D_00211F68);
        *p++ = func_10F448(D_00211F78);
        *p++ = func_10F448(D_00211F88);
    }
}
