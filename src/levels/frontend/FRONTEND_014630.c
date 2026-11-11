/* FRONTEND:0x014630 -- on the final menu page, resets the cursor state and loads the fourteen page resources. */

typedef struct Cursor014630 {
    int w_00;
    int w_04;
    int w_08;
    float f_0C;
} Cursor014630;

extern Cursor014630 D_0012D2C0;
extern int D_0012D2D0[];
extern char D_00107C08[];
extern char D_00107C18[];
extern char D_00107C28[];
extern char D_00107C38[];
extern char D_00107C48[];
extern char D_00107C58[];
extern char D_00107C68[];
extern char D_00107C78[];
extern char D_00107C88[];
extern char D_00107C98[];
extern char D_00107CB0[];
extern char D_00107CC0[];
extern char D_00107CD0[];
extern char D_00107CE0[];

int func_01C598(char *name);

void func_014630(int a, int page)
{
    int *p;

    if (page == 0xFFFF && a != 0) {
        D_0012D2C0.w_00 = 0;
        D_0012D2C0.w_04 = 0;
        D_0012D2C0.w_08 = 0;
        D_0012D2C0.f_0C = 1.0f;
        p = D_0012D2D0;
        *p++ = func_01C598(D_00107C08);
        *p++ = func_01C598(D_00107C18);
        *p++ = func_01C598(D_00107C28);
        *p++ = func_01C598(D_00107C38);
        *p++ = func_01C598(D_00107C48);
        *p++ = func_01C598(D_00107C58);
        *p++ = func_01C598(D_00107C68);
        *p++ = func_01C598(D_00107C78);
        *p++ = func_01C598(D_00107C88);
        *p++ = func_01C598(D_00107C98);
        *p++ = func_01C598(D_00107CB0);
        *p++ = func_01C598(D_00107CC0);
        *p++ = func_01C598(D_00107CD0);
        *p++ = func_01C598(D_00107CE0);
    }
}
