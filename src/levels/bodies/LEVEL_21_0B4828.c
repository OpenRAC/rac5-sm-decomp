/* LEVEL_21:0x0B4828 -- placement copy of LEVEL_01_0D41E8.c: updates the selected cell position globals for an entry. */
typedef struct R { int f0; int f4; char pad[0x40]; int f48; int f4C; } R;
extern int D_00159628;
extern int D_00159624;
extern int D_001595E8[][5];
extern void *D_00159634;
extern int D_00159698;
extern int D_0015969C;
extern int D_00244578;
extern int func_01F230(void *, int);
extern int func_01F258(void *, int);
extern R *func_01E9D8(void *, int);
extern int func_0B2F08(int, int);
void func_0B4828(void *s)
{
    R *r;
    if (!s)
        s = (void *)D_001595E8[D_00159628][D_00159624];
    if (!s || !func_01F230(s, -1) || func_01F258(s, -1)) {
        D_00159698 = 0;
        D_0015969C = 0;
        return;
    }
    if (s == D_00159634)
        return;
    r = func_01E9D8(s, -1);
    if (!r)
        return;
    if (r->f48)
        D_00159698 = r->f48;
    else
        D_00159698 = r->f0;
    if (r->f48)
        D_0015969C = r->f4C;
    else
        D_0015969C = r->f4;
    if (!func_0B2F08(D_00159698, D_0015969C))
        D_00244578 = 0;
}
