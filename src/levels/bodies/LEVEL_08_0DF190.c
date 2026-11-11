/* LEVEL_08:0x0DF190 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_0024D868;
extern int D_0024D864;
extern int D_0024D828[][5];
extern void *D_0024D874;
extern int D_0024D8D8;
extern int D_0024D8DC;
extern int D_0037BFB8;
extern int func_025748(void *, int);
extern int func_025770(void *, int);
extern R *func_024EF0(void *, int);
extern int func_0DD870(int, int);
void func_0DF190(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_0024D828[D_0024D868][D_0024D864];
    if (!s || !func_025748(s, -1) || func_025770(s, -1)) {
        D_0024D8D8 = 0;
        D_0024D8DC = 0;
        return;
    }
    if (s == D_0024D874)
        return;
    r = func_024EF0(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_0024D8D8 = r->f48;
    else
        D_0024D8D8 = r->f0;
    if (r->f48)
        D_0024D8DC = r->f4C;
    else
        D_0024D8DC = r->f4;
    if (!func_0DD870(D_0024D8D8, D_0024D8DC))
        D_0037BFB8 = 0;
}
