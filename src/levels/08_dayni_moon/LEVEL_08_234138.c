/* LEVEL_08:0x234138 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_003EBC40;
extern char D_003EBC30[];
extern char D_003EBC48[];

char *func_234138(void) {
    if (D_003EBC40 == 0) {
        D_003EBC40 = 1;
        memset((unsigned char *)D_003EBC30, 0, 16);
        *(char **)(D_003EBC30 + 4) = D_003EBC48;
    }
    return D_003EBC30;
}
