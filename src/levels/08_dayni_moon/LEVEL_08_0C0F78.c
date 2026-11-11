/* LEVEL_08:0x0C0F78 -- placement copy of FRONTEND_014630.c: on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_00377860;
extern int D_00377870[];
extern char D_0025BB30[];
extern char D_0025BB40[];
extern char D_0025BB50[];
extern char D_0025BB60[];
extern char D_0025BB70[];
extern char D_0025BB80[];
extern char D_0025BB90[];
extern char D_0025BBA0[];
extern char D_0025BBB0[];
extern char D_0025BBC0[];
extern char D_0025BBD8[];
extern char D_0025BBE8[];
extern char D_0025BBF8[];
extern char D_0025BC08[];

int func_11FBE8(char *name);

void func_0C0F78(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_00377860.w_00 = 0;
        D_00377860.w_04 = 0;
        D_00377860.w_08 = 0;
        D_00377860.f_0C = 1.0f;
        p = D_00377870;
        *p++ = func_11FBE8(D_0025BB30);
        *p++ = func_11FBE8(D_0025BB40);
        *p++ = func_11FBE8(D_0025BB50);
        *p++ = func_11FBE8(D_0025BB60);
        *p++ = func_11FBE8(D_0025BB70);
        *p++ = func_11FBE8(D_0025BB80);
        *p++ = func_11FBE8(D_0025BB90);
        *p++ = func_11FBE8(D_0025BBA0);
        *p++ = func_11FBE8(D_0025BBB0);
        *p++ = func_11FBE8(D_0025BBC0);
        *p++ = func_11FBE8(D_0025BBD8);
        *p++ = func_11FBE8(D_0025BBE8);
        *p++ = func_11FBE8(D_0025BBF8);
        *p++ = func_11FBE8(D_0025BC08);
    }
}
