/* LEVEL_04:0x204770 -- placement copy of FRONTEND_024338.c: returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_003B4600;
extern char D_003B45F0[];
extern char D_003B4608[];

char *func_204770(void) {
    if (D_003B4600 == 0) {
        D_003B4600 = 1;
        memset((unsigned char *)D_003B45F0, 0, 16);
        *(char **)(D_003B45F0 + 4) = D_003B4608;
    }
    return D_003B45F0;
}
