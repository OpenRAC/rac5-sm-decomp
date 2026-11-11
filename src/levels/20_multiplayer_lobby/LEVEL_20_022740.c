/* LEVEL_20:0x022740 -- placement copy of LEVEL_16_025C20.c: copies a stat block from 25 looked-up entries into a saved table. */
struct Ent {
    char pad[0x3C];
    int a;
    int b;
    int c;
    unsigned char d[6];
    int e;
};
extern char *D_00104194;
extern struct Ent *func_01EDC8(int i, int j);

void func_022740(void)
{
    unsigned int i;
    struct Ent *e;
    int off;

    for (i = 0; i < 25; i++) {
        off = i * 24;
        e = func_01EDC8(i, -1);
        if (e) {
            *(int *)(D_00104194 + off + 0x600) = e->b;
            *(int *)(D_00104194 + off + 0x604) = e->c;
            *(int *)(D_00104194 + off + 0x5FC) = e->a;
            *(unsigned char *)(D_00104194 + off + 0x608) = e->d[0];
            *(unsigned char *)(D_00104194 + off + 0x60B) = e->d[3];
            *(unsigned char *)(D_00104194 + off + 0x609) = e->d[1];
            *(unsigned char *)(D_00104194 + off + 0x60C) = e->d[4];
            *(unsigned char *)(D_00104194 + off + 0x60A) = e->d[2];
            *(unsigned char *)(D_00104194 + off + 0x60D) = e->d[5];
            *(int *)(D_00104194 + off + 0x610) = e->e;
        }
    }
}
