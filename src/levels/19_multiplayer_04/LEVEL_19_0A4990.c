/* LEVEL_19:0x0A4990 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_002766A0;
extern int D_002766B0[];
extern char D_001C7DE0[];
extern char D_001C7DF0[];
extern char D_001C7E00[];
extern char D_001C7E10[];
extern char D_001C7E20[];
extern char D_001C7E30[];
extern char D_001C7E40[];
extern char D_001C7E50[];
extern char D_001C7E60[];
extern char D_001C7E70[];
extern char D_001C7E88[];
extern char D_001C7E98[];
extern char D_001C7EA8[];
extern char D_001C7EB8[];

int func_0F06A8(char *name);

void func_0A4990(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_002766A0.w_00 = 0;
        D_002766A0.w_04 = 0;
        D_002766A0.w_08 = 0;
        D_002766A0.f_0C = 1.0f;
        p = D_002766B0;
        *p++ = func_0F06A8(D_001C7DE0);
        *p++ = func_0F06A8(D_001C7DF0);
        *p++ = func_0F06A8(D_001C7E00);
        *p++ = func_0F06A8(D_001C7E10);
        *p++ = func_0F06A8(D_001C7E20);
        *p++ = func_0F06A8(D_001C7E30);
        *p++ = func_0F06A8(D_001C7E40);
        *p++ = func_0F06A8(D_001C7E50);
        *p++ = func_0F06A8(D_001C7E60);
        *p++ = func_0F06A8(D_001C7E70);
        *p++ = func_0F06A8(D_001C7E88);
        *p++ = func_0F06A8(D_001C7E98);
        *p++ = func_0F06A8(D_001C7EA8);
        *p++ = func_0F06A8(D_001C7EB8);
    }
}
