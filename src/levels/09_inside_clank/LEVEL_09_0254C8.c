/* LEVEL_09:0x0254C8 -- placement copy of LEVEL_01_026258.c: copies the name into the global slot, and on the first call stores the mode flag and the looked-up handle (zero when the flag is set). */
extern char D_001DDCF8[];
extern unsigned char D_001DDCD1;
extern unsigned char D_001DDD58;
extern int D_001DDD74;
extern int D_001DDD8C;
extern char *strcpy(char *dst, const char *src);
extern int func_024730(void *p);

int func_0254C8(void *p, int flag)
{
    int *slot;
    int v;

    strcpy(D_001DDCF8, p);
    D_001DDD58 = flag;
    if (D_001DDCD1 != 0) {
        return 0;
    }
    D_001DDCD1 = 1;
    slot = &D_001DDD74;
    if (flag != 0) {
        v = 0;
    } else {
        v = func_024730(p);
    }
    *slot = v;
    D_001DDD8C = 1;
    return 1;
}
