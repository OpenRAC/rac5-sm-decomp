/* LEVEL_18:0x114958 -- placement copy of LEVEL_16_115BB0.c: picks a status caption for the current state, formats it into the shared text buffer, pushes it to both screens and records the caller's value. */
extern unsigned char D_001B97F3;
extern unsigned char D_001B97F1;
extern int D_001B97D8;
extern int D_001B97DC;
extern char D_002DFDB0[];
extern char D_001D0E70[];

extern char *func_10DFE0(int id);
extern unsigned char func_114240(void);
extern int func_114F88(int v);
extern char *func_115370(void *v);
extern char *func_1140F0(int v);
extern char *strcpy(char *dst, const char *src);
extern int sprintf(char *dst, const char *fmt, ...);
extern void func_0A6FA8(int screen, char *text, int a, int b);

int func_114958(int value)
{
    char *name;
    int q;
    int i;

    if (D_001B97F3) {
        strcpy(D_002DFDB0, func_10DFE0(0x6C8));
    } else if (D_001B97F1 == 0) {
        if (func_114240() == 0) {
            q = func_114F88(D_001B97D8);
            name = q ? func_115370((void *)q) : 0;
            sprintf(D_002DFDB0, func_10DFE0(0x673), name ? name : D_001D0E70);
        } else {
            sprintf(D_002DFDB0, func_10DFE0(0x673), func_1140F0(D_001B97D8));
        }
    } else {
        strcpy(D_002DFDB0, func_10DFE0(0x674));
    }
    for (i = 0; i < 2; i++) {
        func_0A6FA8(i, D_002DFDB0, 0, 0x5A);
    }
    D_001B97DC = value;
    return 1;
}
