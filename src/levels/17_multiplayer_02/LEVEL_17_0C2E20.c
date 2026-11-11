/* LEVEL_17:0x0C2E20 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_001A5E58;
extern int D_001A5E54;
extern int D_001A5E18[][5];
extern void *D_001A5E64;
extern int D_001A5EC8;
extern int D_001A5ECC;
extern int D_0026C0B8;
extern int func_022210(void *, int);
extern int func_022238(void *, int);
extern R *func_021A90(void *, int);
extern int func_0C1500(int, int);
void func_0C2E20(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_001A5E18[D_001A5E58][D_001A5E54];
    if (!s || !func_022210(s, -1) || func_022238(s, -1)) {
        D_001A5EC8 = 0;
        D_001A5ECC = 0;
        return;
    }
    if (s == D_001A5E64)
        return;
    r = func_021A90(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_001A5EC8 = r->f48;
    else
        D_001A5EC8 = r->f0;
    if (r->f48)
        D_001A5ECC = r->f4C;
    else
        D_001A5ECC = r->f4;
    if (!func_0C1500(D_001A5EC8, D_001A5ECC))
        D_0026C0B8 = 0;
}
