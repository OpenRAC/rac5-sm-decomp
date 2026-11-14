/* LEVEL_23:0x0242A0 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_001C72F8[];
extern unsigned char D_001C72D1;
extern unsigned char D_001C7358;
extern int D_001C7374;
extern int D_001C738C;
extern char *strcpy(char *dst, const char *src);
extern int func_023480(void *p);

int func_0242A0(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_001C72F8, p);
    D_001C7358 = flag;
    if (D_001C72D1 != 0) {
        return 0;
    }
    D_001C72D1 = 1;
    slot = &D_001C7374;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_023480(p);
    }
    *slot = v;
    D_001C738C = 1;
    return 1;
}
