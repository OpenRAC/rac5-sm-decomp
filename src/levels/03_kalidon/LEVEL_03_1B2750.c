/* LEVEL_03:0x1B2750 -- placement copy of LEVEL_01_19F648.c: copies two fields of the global record into the high halves of two packed global words, then stores the helper result for the first word. */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};
extern unsigned int D_002219E8;
extern unsigned int D_00221A44;
extern unsigned int D_00221A48;
extern struct Src19F648 D_002B2C40;
extern int func_06CDA8(unsigned int word);
void func_1B2750(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    int r;
    s = &D_002B2C40;
    b = s->w_34;
    a = s->w_1D0;
    c = D_00221A44;
    d = D_00221A48;
    D_00221A44 = (c & 0xF800FFFF) | (b << 16);
    D_00221A48 = (d & 0xF800FFFF) | (a << 16);
    r = func_06CDA8(D_00221A44);
    D_002219E8 = r;
}
