/* LEVEL_16:0x115BB0 -- picks a status caption for the current state, formats it into the shared text buffer, pushes it to both screens and records the caller's value. */
extern unsigned char D_001B8373;
extern unsigned char D_001B8371;
extern int D_001B8358;
extern int D_001B835C;
extern char D_002DFA30[];
extern char D_001CF8F0[];

extern char *func_10F330(int id);
extern unsigned char func_115498(void);
extern int func_1161E0(int v);
extern char *func_1165C8(void *v);
extern char *func_115350(int v);
extern char *strcpy(char *dst, const char *src);
extern int sprintf(char *dst, const char *fmt, ...);
extern void func_0A7FD0(int screen, char *text, int a, int b);

int func_115BB0(int value)
{
    char *name;
    int q;
    int i;

    if (D_001B8373) {
        strcpy(D_002DFA30, func_10F330(0x6C8));
    } else if (D_001B8371 == 0) {
        if (func_115498() == 0) {
            q = func_1161E0(D_001B8358);
            name = q ? func_1165C8((void *)q) : 0;
            sprintf(D_002DFA30, func_10F330(0x673), name ? name : D_001CF8F0);
        } else {
            sprintf(D_002DFA30, func_10F330(0x673), func_115350(D_001B8358));
        }
    } else {
        strcpy(D_002DFA30, func_10F330(0x674));
    }
    for (i = 0; i < 2; i++) {
        func_0A7FD0(i, D_002DFA30, 0, 0x5A);
    }
    D_001B835C = value;
    return 1;
}
