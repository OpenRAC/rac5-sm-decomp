/* LEVEL_19:0x0257C8 -- placement copy of LEVEL_16_025C20.c: copies a stat block from 25 looked-up entries into a saved table. */
struct Ent {
    char pad[0x3C];
    int a;
    int b;
    int c;
    unsigned char d[6];
    int e;
};
extern char *D_001A2C34;
extern struct Ent *func_021D08(int i, int j);

void func_0257C8(void)
{
    unsigned int i;
    struct Ent *e;
    int off;

    for (i = 0; i < 25; i++) {
        off = i * 24;
        e = func_021D08(i, -1);
        if (e) {
            *(int *)(D_001A2C34 + off + 0x600) = e->b;
            *(int *)(D_001A2C34 + off + 0x604) = e->c;
            *(int *)(D_001A2C34 + off + 0x5FC) = e->a;
            *(unsigned char *)(D_001A2C34 + off + 0x608) = e->d[0];
            *(unsigned char *)(D_001A2C34 + off + 0x60B) = e->d[3];
            *(unsigned char *)(D_001A2C34 + off + 0x609) = e->d[1];
            *(unsigned char *)(D_001A2C34 + off + 0x60C) = e->d[4];
            *(unsigned char *)(D_001A2C34 + off + 0x60A) = e->d[2];
            *(unsigned char *)(D_001A2C34 + off + 0x60D) = e->d[5];
            *(int *)(D_001A2C34 + off + 0x610) = e->e;
        }
    }
}
