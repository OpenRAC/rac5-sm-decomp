/* FRONTEND:0x00DC30 -- initializes a rectangular widget record from center, size and a value. */
typedef struct {
    int x0, y0, x1, y1;
    short w10, w12;
    int i14, i18, i1C, i20;
    char b24;
    char pad25[3];
    int i28, i2C, i30;
    char pad34[5];
    char b39;
    char pad3A[10];
    int i44;
    char pad48;
    char b49;
    char pad4A[2];
    int i4C;
    int pad50;
} W;
extern void *memset(void *p, int c, unsigned n);
extern void func_00DD18(W *w);

void func_00DC30(W *w, short x, short y, short hw, short hh, int val)
{
    memset(w, 0, 0x54);
    w->x0 = x - (hw >> 1);
    w->x1 = x + (hw >> 1);
    w->y0 = y - (hh >> 1);
    w->y1 = y + (hh >> 1);
    w->i28 = val;
    w->i20 = 0x85;
    w->w10 = 8;
    w->w12 = 8;
    w->i30 = 1;
    w->i2C = 0xFFC0C0C0;
    w->b39 = 1;
    w->b24 = 0;
    w->i4C = 0;
    func_00DD18(w);
    w->i18 = 0;
    w->b49 = 0;
    w->i44 = 4;
}
