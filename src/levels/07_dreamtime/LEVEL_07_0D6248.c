/* LEVEL_07:0x0D6248 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_00218CA8;
extern int D_00218CA4;
extern int D_00218C68[][5];
extern void *D_00218CB4;
extern int D_00218D18;
extern int D_00218D1C;
extern int D_00342638;
extern int func_025490(void *, int);
extern int func_0254B8(void *, int);
extern R *func_024C38(void *, int);
extern int func_0D4928(int, int);
void func_0D6248(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_00218C68[D_00218CA8][D_00218CA4];
    if (!s || !func_025490(s, -1) || func_0254B8(s, -1)) {
        D_00218D18 = 0;
        D_00218D1C = 0;
        return;
    }
    if (s == D_00218CB4)
        return;
    r = func_024C38(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_00218D18 = r->f48;
    else
        D_00218D18 = r->f0;
    if (r->f48)
        D_00218D1C = r->f4C;
    else
        D_00218D1C = r->f4;
    if (!func_0D4928(D_00218D18, D_00218D1C))
        D_00342638 = 0;
}
