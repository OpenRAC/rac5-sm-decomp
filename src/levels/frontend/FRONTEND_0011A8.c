/* FRONTEND:0x0011A8 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_00027D88[];
extern unsigned char D_00027D61;
extern unsigned char D_00027DE8;
extern int D_00027E04;
extern int D_00027E1C;
extern char *strcpy(char *dst, const char *src);
extern int func_000418(void *p);

int func_0011A8(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_00027D88, p);
    D_00027DE8 = flag;
    if (D_00027D61 != 0) {
        return 0;
    }
    D_00027D61 = 1;
    slot = &D_00027E04;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_000418(p);
    }
    *slot = v;
    D_00027E1C = 1;
    return 1;
}
