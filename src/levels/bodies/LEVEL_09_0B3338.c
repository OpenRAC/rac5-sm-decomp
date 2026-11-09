/* LEVEL_09:0x0B3338 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_0030FD60;
extern int D_0030FD70[];
extern char D_001FBAB0[];
extern char D_001FBAC0[];
extern char D_001FBAD0[];
extern char D_001FBAE0[];
extern char D_001FBAF0[];
extern char D_001FBB00[];
extern char D_001FBB10[];
extern char D_001FBB20[];
extern char D_001FBB30[];
extern char D_001FBB40[];
extern char D_001FBB58[];
extern char D_001FBB68[];
extern char D_001FBB78[];
extern char D_001FBB88[];

int func_108838(char *name);

void func_0B3338(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_0030FD60.w_00 = 0;
        D_0030FD60.w_04 = 0;
        D_0030FD60.w_08 = 0;
        D_0030FD60.f_0C = 1.0f;
        p = D_0030FD70;
        *p++ = func_108838(D_001FBAB0);
        *p++ = func_108838(D_001FBAC0);
        *p++ = func_108838(D_001FBAD0);
        *p++ = func_108838(D_001FBAE0);
        *p++ = func_108838(D_001FBAF0);
        *p++ = func_108838(D_001FBB00);
        *p++ = func_108838(D_001FBB10);
        *p++ = func_108838(D_001FBB20);
        *p++ = func_108838(D_001FBB30);
        *p++ = func_108838(D_001FBB40);
        *p++ = func_108838(D_001FBB58);
        *p++ = func_108838(D_001FBB68);
        *p++ = func_108838(D_001FBB78);
        *p++ = func_108838(D_001FBB88);
    }
}
