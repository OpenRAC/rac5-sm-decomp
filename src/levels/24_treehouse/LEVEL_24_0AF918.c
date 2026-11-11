/* LEVEL_24:0x0AF918 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_002F44A0;
extern int D_002F44B0[];
extern char D_001E2C30[];
extern char D_001E2C40[];
extern char D_001E2C50[];
extern char D_001E2C60[];
extern char D_001E2C70[];
extern char D_001E2C80[];
extern char D_001E2C90[];
extern char D_001E2CA0[];
extern char D_001E2CB0[];
extern char D_001E2CC0[];
extern char D_001E2CD8[];
extern char D_001E2CE8[];
extern char D_001E2CF8[];
extern char D_001E2D08[];

int func_106488(char *name);

void func_0AF918(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_002F44A0.w_00 = 0;
        D_002F44A0.w_04 = 0;
        D_002F44A0.w_08 = 0;
        D_002F44A0.f_0C = 1.0f;
        p = D_002F44B0;
        *p++ = func_106488(D_001E2C30);
        *p++ = func_106488(D_001E2C40);
        *p++ = func_106488(D_001E2C50);
        *p++ = func_106488(D_001E2C60);
        *p++ = func_106488(D_001E2C70);
        *p++ = func_106488(D_001E2C80);
        *p++ = func_106488(D_001E2C90);
        *p++ = func_106488(D_001E2CA0);
        *p++ = func_106488(D_001E2CB0);
        *p++ = func_106488(D_001E2CC0);
        *p++ = func_106488(D_001E2CD8);
        *p++ = func_106488(D_001E2CE8);
        *p++ = func_106488(D_001E2CF8);
        *p++ = func_106488(D_001E2D08);
    }
}
