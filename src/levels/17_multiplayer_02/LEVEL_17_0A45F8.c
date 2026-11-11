/* LEVEL_17:0x0A45F8 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_00267820;
extern int D_00267830[];
extern char D_001BA060[];
extern char D_001BA070[];
extern char D_001BA080[];
extern char D_001BA090[];
extern char D_001BA0A0[];
extern char D_001BA0B0[];
extern char D_001BA0C0[];
extern char D_001BA0D0[];
extern char D_001BA0E0[];
extern char D_001BA0F0[];
extern char D_001BA108[];
extern char D_001BA118[];
extern char D_001BA128[];
extern char D_001BA138[];

int func_0EF670(char *name);

void func_0A45F8(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_00267820.w_00 = 0;
        D_00267820.w_04 = 0;
        D_00267820.w_08 = 0;
        D_00267820.f_0C = 1.0f;
        p = D_00267830;
        *p++ = func_0EF670(D_001BA060);
        *p++ = func_0EF670(D_001BA070);
        *p++ = func_0EF670(D_001BA080);
        *p++ = func_0EF670(D_001BA090);
        *p++ = func_0EF670(D_001BA0A0);
        *p++ = func_0EF670(D_001BA0B0);
        *p++ = func_0EF670(D_001BA0C0);
        *p++ = func_0EF670(D_001BA0D0);
        *p++ = func_0EF670(D_001BA0E0);
        *p++ = func_0EF670(D_001BA0F0);
        *p++ = func_0EF670(D_001BA108);
        *p++ = func_0EF670(D_001BA118);
        *p++ = func_0EF670(D_001BA128);
        *p++ = func_0EF670(D_001BA138);
    }
}
