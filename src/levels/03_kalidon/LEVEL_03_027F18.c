/* LEVEL_03:0x027F18 -- placement copy of FRONTEND_0036F8.c: copies the first 25 slot descriptors into the global slot table. */
typedef struct {
    char pad0[0x3C];
    int v3C;
    int v40;
    int v44;
    char pad48[4];
    unsigned char b4C;
    unsigned char b4D;
    unsigned char b4E;
    unsigned char b4F;
    unsigned char b50;
    unsigned char b51;
    char pad52[2];
    int v54;
} Src;

extern unsigned char *D_0020C62C;
extern int func_0244F8(int x, int y);

void func_027F18(void)
{
    unsigned int i;
    int off;
    Src *s;

    off = 0;
    i = 0;
    do {
        s = (Src *)func_0244F8(i, -1);
        i++;
        if (s) {
            *(int *)(D_0020C62C + off + 0x600) = s->v40;
            *(int *)(D_0020C62C + off + 0x604) = s->v44;
            *(int *)(D_0020C62C + off + 0x5FC) = s->v3C;
            *(D_0020C62C + off + 0x608) = s->b4C;
            *(D_0020C62C + off + 0x60B) = s->b4F;
            *(D_0020C62C + off + 0x609) = s->b4D;
            *(D_0020C62C + off + 0x60C) = s->b50;
            *(D_0020C62C + off + 0x60A) = s->b4E;
            *(D_0020C62C + off + 0x60D) = s->b51;
            *(int *)(D_0020C62C + off + 0x610) = s->v54;
        }
        off += 0x18;
    } while (i < 25);
}
