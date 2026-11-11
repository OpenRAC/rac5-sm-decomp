/* LEVEL_18:0x0C28B8 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_001B3CD8;
extern int D_001B3CD4;
extern int D_001B3C98[][5];
extern void *D_001B3CE4;
extern int D_001B3D48;
extern int D_001B3D4C;
extern int D_0027B138;
extern int func_021ED8(void *, int);
extern int func_021F00(void *, int);
extern R *func_021758(void *, int);
extern int func_0C0F98(int, int);
void func_0C28B8(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_001B3C98[D_001B3CD8][D_001B3CD4];
    if (!s || !func_021ED8(s, -1) || func_021F00(s, -1)) {
        D_001B3D48 = 0;
        D_001B3D4C = 0;
        return;
    }
    if (s == D_001B3CE4)
        return;
    r = func_021758(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_001B3D48 = r->f48;
    else
        D_001B3D48 = r->f0;
    if (r->f48)
        D_001B3D4C = r->f4C;
    else
        D_001B3D4C = r->f4;
    if (!func_0C0F98(D_001B3D48, D_001B3D4C))
        D_0027B138 = 0;
}
