/* LEVEL_19:0x116328 -- placement copy of LEVEL_16_115BB0.c: picks a status caption for the current state, formats it into the shared text buffer, pushes it to both screens and records the caller's value. */
extern unsigned char D_001B94EB;
extern unsigned char D_001B94E9;
extern int D_001B94D0;
extern int D_001B94D4;
extern char D_002DFBB0[];
extern char D_001D0AF0[];

extern char *func_10F9D0(int id);
extern unsigned char func_115C10(void);
extern int func_116958(int v);
extern char *func_116D40(void *v);
extern char *func_115AC8(int v);
extern char *strcpy(char *dst, const char *src);
extern int sprintf(char *dst, const char *fmt, ...);
extern void func_0A78A8(int screen, char *text, int a, int b);

int func_116328(int value)
{
    char *name;
    int q;
    int i;

    if (D_001B94EB) {
        strcpy(D_002DFBB0, func_10F9D0(0x6C8));
    } else if (D_001B94E9 == 0) {
        if (func_115C10() == 0) {
            q = func_116958(D_001B94D0);
            name = q ? func_116D40((void *)q) : 0;
            sprintf(D_002DFBB0, func_10F9D0(0x673), name ? name : D_001D0AF0);
        } else {
            sprintf(D_002DFBB0, func_10F9D0(0x673), func_115AC8(D_001B94D0));
        }
    } else {
        strcpy(D_002DFBB0, func_10F9D0(0x674));
    }
    for (i = 0; i < 2; i++) {
        func_0A78A8(i, D_002DFBB0, 0, 0x5A);
    }
    D_001B94D4 = value;
    return 1;
}
