/* LEVEL_20:0x0E84B0 -- placement copy of LEVEL_16_115BB0.c: picks a status caption for the current state, formats it into the shared text buffer, pushes it to both screens and records the caller's value. */
extern unsigned char D_0011AA13;
extern unsigned char D_0011AA11;
extern int D_0011A9F8;
extern int D_0011A9FC;
extern char D_00202F88[];
extern char D_00130960[];

extern char *func_0E2118(int id);
extern unsigned char func_0E7DE0(void);
extern int func_0E8AE0(int v);
extern char *func_0E8EC8(void *v);
extern char *func_0E7CC0(int v);
extern char *strcpy(char *dst, const char *src);
extern int sprintf(char *dst, const char *fmt, ...);
extern void func_092500(int screen, char *text, int a, int b);

int func_0E84B0(int value)
{
    char *name;
    int q;
    int i;

    if (D_0011AA13) {
        strcpy(D_00202F88, func_0E2118(0x6C8));
    } else if (D_0011AA11 == 0) {
        if (func_0E7DE0() == 0) {
            q = func_0E8AE0(D_0011A9F8);
            name = q ? func_0E8EC8((void *)q) : 0;
            sprintf(D_00202F88, func_0E2118(0x673), name ? name : D_00130960);
        } else {
            sprintf(D_00202F88, func_0E2118(0x673), func_0E7CC0(D_0011A9F8));
        }
    } else {
        strcpy(D_00202F88, func_0E2118(0x674));
    }
    for (i = 0; i < 2; i++) {
        func_092500(i, D_00202F88, 0, 0x5A);
    }
    D_0011A9FC = value;
    return 1;
}
