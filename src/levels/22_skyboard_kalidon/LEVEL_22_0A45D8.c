/* LEVEL_22:0x0A45D8 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_0027E1A0;
extern int D_0027E1B0[];
extern char D_0016F330[];
extern char D_0016F340[];
extern char D_0016F350[];
extern char D_0016F360[];
extern char D_0016F370[];
extern char D_0016F380[];
extern char D_0016F390[];
extern char D_0016F3A0[];
extern char D_0016F3B0[];
extern char D_0016F3C0[];
extern char D_0016F3D8[];
extern char D_0016F3E8[];
extern char D_0016F3F8[];
extern char D_0016F408[];

int func_0EB1F0(char *name);

void func_0A45D8(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_0027E1A0.w_00 = 0;
        D_0027E1A0.w_04 = 0;
        D_0027E1A0.w_08 = 0;
        D_0027E1A0.f_0C = 1.0f;
        p = D_0027E1B0;
        *p++ = func_0EB1F0(D_0016F330);
        *p++ = func_0EB1F0(D_0016F340);
        *p++ = func_0EB1F0(D_0016F350);
        *p++ = func_0EB1F0(D_0016F360);
        *p++ = func_0EB1F0(D_0016F370);
        *p++ = func_0EB1F0(D_0016F380);
        *p++ = func_0EB1F0(D_0016F390);
        *p++ = func_0EB1F0(D_0016F3A0);
        *p++ = func_0EB1F0(D_0016F3B0);
        *p++ = func_0EB1F0(D_0016F3C0);
        *p++ = func_0EB1F0(D_0016F3D8);
        *p++ = func_0EB1F0(D_0016F3E8);
        *p++ = func_0EB1F0(D_0016F3F8);
        *p++ = func_0EB1F0(D_0016F408);
    }
}
