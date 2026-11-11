/* LEVEL_16:0x0A5118 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_00276520;
extern int D_00276530[];
extern char D_001C6BE0[];
extern char D_001C6BF0[];
extern char D_001C6C00[];
extern char D_001C6C10[];
extern char D_001C6C20[];
extern char D_001C6C30[];
extern char D_001C6C40[];
extern char D_001C6C50[];
extern char D_001C6C60[];
extern char D_001C6C70[];
extern char D_001C6C88[];
extern char D_001C6C98[];
extern char D_001C6CA8[];
extern char D_001C6CB8[];

int func_0F0060(char *name);

void func_0A5118(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_00276520.w_00 = 0;
        D_00276520.w_04 = 0;
        D_00276520.w_08 = 0;
        D_00276520.f_0C = 1.0f;
        p = D_00276530;
        *p++ = func_0F0060(D_001C6BE0);
        *p++ = func_0F0060(D_001C6BF0);
        *p++ = func_0F0060(D_001C6C00);
        *p++ = func_0F0060(D_001C6C10);
        *p++ = func_0F0060(D_001C6C20);
        *p++ = func_0F0060(D_001C6C30);
        *p++ = func_0F0060(D_001C6C40);
        *p++ = func_0F0060(D_001C6C50);
        *p++ = func_0F0060(D_001C6C60);
        *p++ = func_0F0060(D_001C6C70);
        *p++ = func_0F0060(D_001C6C88);
        *p++ = func_0F0060(D_001C6C98);
        *p++ = func_0F0060(D_001C6CA8);
        *p++ = func_0F0060(D_001C6CB8);
    }
}
