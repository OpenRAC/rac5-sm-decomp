/* LEVEL_10:0x0D5628 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_0020D9A8;
extern int D_0020D9A4;
extern int D_0020D968[][5];
extern void *D_0020D9B4;
extern int D_0020DA18;
extern int D_0020DA1C;
extern int D_00336138;
extern int func_024830(void *, int);
extern int func_024858(void *, int);
extern R *func_023FD8(void *, int);
extern int func_0D3D08(int, int);
void func_0D5628(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_0020D968[D_0020D9A8][D_0020D9A4];
    if (!s || !func_024830(s, -1) || func_024858(s, -1)) {
        D_0020DA18 = 0;
        D_0020DA1C = 0;
        return;
    }
    if (s == D_0020D9B4)
        return;
    r = func_023FD8(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_0020DA18 = r->f48;
    else
        D_0020DA18 = r->f0;
    if (r->f48)
        D_0020DA1C = r->f4C;
    else
        D_0020DA1C = r->f4;
    if (!func_0D3D08(D_0020DA18, D_0020DA1C))
        D_00336138 = 0;
}
