/* LEVEL_23:0x0ACE50 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_002F9A20;
extern int D_002F9A30[];
extern char D_001E5030[];
extern char D_001E5040[];
extern char D_001E5050[];
extern char D_001E5060[];
extern char D_001E5070[];
extern char D_001E5080[];
extern char D_001E5090[];
extern char D_001E50A0[];
extern char D_001E50B0[];
extern char D_001E50C0[];
extern char D_001E50D8[];
extern char D_001E50E8[];
extern char D_001E50F8[];
extern char D_001E5108[];

int func_101CB0(char *name);

void func_0ACE50(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_002F9A20.w_00 = 0;
        D_002F9A20.w_04 = 0;
        D_002F9A20.w_08 = 0;
        D_002F9A20.f_0C = 1.0f;
        p = D_002F9A30;
        *p++ = func_101CB0(D_001E5030);
        *p++ = func_101CB0(D_001E5040);
        *p++ = func_101CB0(D_001E5050);
        *p++ = func_101CB0(D_001E5060);
        *p++ = func_101CB0(D_001E5070);
        *p++ = func_101CB0(D_001E5080);
        *p++ = func_101CB0(D_001E5090);
        *p++ = func_101CB0(D_001E50A0);
        *p++ = func_101CB0(D_001E50B0);
        *p++ = func_101CB0(D_001E50C0);
        *p++ = func_101CB0(D_001E50D8);
        *p++ = func_101CB0(D_001E50E8);
        *p++ = func_101CB0(D_001E50F8);
        *p++ = func_101CB0(D_001E5108);
    }
}
