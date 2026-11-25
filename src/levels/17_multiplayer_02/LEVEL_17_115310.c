/* LEVEL_17:0x115310 -- placement copy of LEVEL_16_115BB0.c: picks a status caption for the current state, formats it into the shared text buffer, pushes it to both screens and records the caller's value. */
extern unsigned char D_001AB96B;
extern unsigned char D_001AB969;
extern int D_001AB950;
extern int D_001AB954;
extern char D_002D0D30[];
extern char D_001C2D70[];

extern char *func_10E8A8(int id);
extern unsigned char func_114BF8(void);
extern int func_115940(int v);
extern char *func_115D28(void *v);
extern char *func_114AB0(int v);
extern char *strcpy(char *dst, const char *src);
extern int sprintf(char *dst, const char *fmt, ...);
extern void func_0A7510(int screen, char *text, int a, int b);

int func_115310(int value)
{
    char *name;
    int q;
    int i;

    if (D_001AB96B) {
        strcpy(D_002D0D30, func_10E8A8(0x6C8));
    } else if (D_001AB969 == 0) {
        if (func_114BF8() == 0) {
            q = func_115940(D_001AB950);
            name = q ? func_115D28((void *)q) : 0;
            sprintf(D_002D0D30, func_10E8A8(0x673), name ? name : D_001C2D70);
        } else {
            sprintf(D_002D0D30, func_10E8A8(0x673), func_114AB0(D_001AB950));
        }
    } else {
        strcpy(D_002D0D30, func_10E8A8(0x674));
    }
    for (i = 0; i < 2; i++) {
        func_0A7510(i, D_002D0D30, 0, 0x5A);
    }
    D_001AB954 = value;
    return 1;
}
