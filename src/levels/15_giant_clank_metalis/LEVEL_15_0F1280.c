/* LEVEL_15:0x0F1280 -- placement copy of LEVEL_01_1323B8.c: looks up a name string for a key in the loaded table, with fixed fallback strings. */
typedef struct {
    char *f0;
    char pad4[4];
    unsigned char f8;
    char pad9[3];
    unsigned char fC;
    char padD[3];
    unsigned int f10;
    unsigned char f14;
    unsigned char f15;
    unsigned char f16;
} Tbl;
extern Tbl D_0029F0E8;
extern char D_0015B950[];
extern char D_0015B960[];
extern char D_0015B970[];
extern char D_0015B988[];
extern int func_0F15F8(Tbl *t, int a);

char *func_0F1280(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_0015B950;
    if (D_0029F0E8.f8 == 0)
        return D_0015B970;
    if (D_0029F0E8.f10 == 0 || func_0F15F8(&D_0029F0E8, D_0029F0E8.fC) == 0)
        return D_0015B960;
    if (D_0029F0E8.f16 != 0 && key >= 0)
        return D_0015B988;
    p = D_0029F0E8.f0;
    if (D_0029F0E8.f14)
        p += 4;
    for (i = 0; i < D_0029F0E8.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_0029F0E8.f15)
            p += 12;
        else
            p += 8;
        if (D_0029F0E8.f14)
            p += 4;
    }
    return D_0015B950;
}
