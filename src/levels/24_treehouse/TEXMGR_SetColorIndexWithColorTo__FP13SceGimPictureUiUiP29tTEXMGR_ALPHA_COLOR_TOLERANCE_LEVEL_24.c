/* LEVEL_24:0x09CC20 -- placement copy of LEVEL_01_0A33A8.c: replaces matching packed color words in a table, either by a byte range test or by an exact 24-bit key. */

typedef struct {
    char pad_00[4];
    unsigned short kind_04;
    char pad_06[2];
    unsigned short n_08;
} Hdr;

extern unsigned int *func_09A0D0(void *o, int a, int b);
extern int func_09A048(void *o);

int TEXMGR_SetColorIndexWithColorTo__FP13SceGimPictureUiUiP29tTEXMGR_ALPHA_COLOR_TOLERANCE(void *o, unsigned int key, unsigned int val, unsigned char *col)
{
    unsigned int *ents;
    int hv;
    Hdr *h;
    unsigned int n;
    unsigned int i;
    unsigned int j;
    int found;
    unsigned char lo0;
    unsigned char lo1;
    unsigned int *p;
    unsigned char c0;
    unsigned char c1;
    unsigned int c2;

    ents = func_09A0D0(o, 0, 0);
    hv = func_09A048(o);
    h = (Hdr *)hv;
    if (h == 0 || h->kind_04 != 3) {
        return 0;
    }
    n = h->n_08;
    found = 0;
    if (col != 0) {
        lo0 = 255 - col[0];
        lo1 = 255 - col[1];
        for (i = 0; i < n; i++) {
            p = &ents[i];
            c0 = ((unsigned char *)p)[0];
            c1 = ((unsigned char *)p)[1];
            c2 = (*p & 0xFF0000) >> 16;
            if (c0 >= lo0 && col[2] >= c1 && c2 >= lo1) {
                *p = val;
                found = 1;
            }
        }
    } else {
        for (j = 0; j < n; j++) {
            if ((ents[j] & 0xFFFFFF) == key) {
                ents[j] = val;
                found = 1;
            }
        }
    }
    return found;
}
