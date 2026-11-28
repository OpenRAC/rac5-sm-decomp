/* FRONTEND:0x024338 -- returns the single shared exception state record, setting it up on first use. Ported from rac2-decomp src/core/00120390.c (eh_get_static_context). */
extern void *memset(unsigned char *, int, int);

extern int D_001EF330;
extern char D_001EF320[];
extern char D_001EF338[];

char *func_024338(void) {
    if (D_001EF330 == 0) {
        D_001EF330 = 1;
        memset((unsigned char *)D_001EF320, 0, 16);
        *(char **)(D_001EF320 + 4) = D_001EF338;
    }
    return D_001EF320;
}
