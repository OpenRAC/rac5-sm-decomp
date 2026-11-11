/* LEVEL_05:0x0B4630 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_003144A0;
extern int D_003144B0[];
extern char D_00200DB0[];
extern char D_00200DC0[];
extern char D_00200DD0[];
extern char D_00200DE0[];
extern char D_00200DF0[];
extern char D_00200E00[];
extern char D_00200E10[];
extern char D_00200E20[];
extern char D_00200E30[];
extern char D_00200E40[];
extern char D_00200E58[];
extern char D_00200E68[];
extern char D_00200E78[];
extern char D_00200E88[];

int func_10B888(char *name);

void func_0B4630(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_003144A0.w_00 = 0;
        D_003144A0.w_04 = 0;
        D_003144A0.w_08 = 0;
        D_003144A0.f_0C = 1.0f;
        p = D_003144B0;
        *p++ = func_10B888(D_00200DB0);
        *p++ = func_10B888(D_00200DC0);
        *p++ = func_10B888(D_00200DD0);
        *p++ = func_10B888(D_00200DE0);
        *p++ = func_10B888(D_00200DF0);
        *p++ = func_10B888(D_00200E00);
        *p++ = func_10B888(D_00200E10);
        *p++ = func_10B888(D_00200E20);
        *p++ = func_10B888(D_00200E30);
        *p++ = func_10B888(D_00200E40);
        *p++ = func_10B888(D_00200E58);
        *p++ = func_10B888(D_00200E68);
        *p++ = func_10B888(D_00200E78);
        *p++ = func_10B888(D_00200E88);
    }
}
