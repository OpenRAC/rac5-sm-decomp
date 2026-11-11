/* LEVEL_18:0x0A4110 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_002768A0;
extern int D_002768B0[];
extern char D_001C8160[];
extern char D_001C8170[];
extern char D_001C8180[];
extern char D_001C8190[];
extern char D_001C81A0[];
extern char D_001C81B0[];
extern char D_001C81C0[];
extern char D_001C81D0[];
extern char D_001C81E0[];
extern char D_001C81F0[];
extern char D_001C8208[];
extern char D_001C8218[];
extern char D_001C8228[];
extern char D_001C8238[];

int func_0EE898(char *name);

void func_0A4110(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_002768A0.w_00 = 0;
        D_002768A0.w_04 = 0;
        D_002768A0.w_08 = 0;
        D_002768A0.f_0C = 1.0f;
        p = D_002768B0;
        *p++ = func_0EE898(D_001C8160);
        *p++ = func_0EE898(D_001C8170);
        *p++ = func_0EE898(D_001C8180);
        *p++ = func_0EE898(D_001C8190);
        *p++ = func_0EE898(D_001C81A0);
        *p++ = func_0EE898(D_001C81B0);
        *p++ = func_0EE898(D_001C81C0);
        *p++ = func_0EE898(D_001C81D0);
        *p++ = func_0EE898(D_001C81E0);
        *p++ = func_0EE898(D_001C81F0);
        *p++ = func_0EE898(D_001C8208);
        *p++ = func_0EE898(D_001C8218);
        *p++ = func_0EE898(D_001C8228);
        *p++ = func_0EE898(D_001C8238);
    }
}
