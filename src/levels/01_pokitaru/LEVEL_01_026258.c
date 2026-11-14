/* LEVEL_01:0x026258 -- copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_001F3EF8[];
extern unsigned char D_001F3ED1;
extern unsigned char D_001F3F58;
extern int D_001F3F74;
extern int D_001F3F8C;
extern char *strcpy(char *dst, const char *src);
extern int func_025438(void *p);

int func_026258(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_001F3EF8, p);
    D_001F3F58 = flag;
    if (D_001F3ED1 != 0) {
        return 0;
    }
    D_001F3ED1 = 1;
    slot = &D_001F3F74;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_025438(p);
    }
    *slot = v;
    D_001F3F8C = 1;
    return 1;
}
