/* LEVEL_08:0x0B91F8 -- placement copy of LEVEL_01_0AE8C0.c: looks up an entry of the current object's table (index overridable by a global) when the object is enabled; returns the entry data pointer or null. */
typedef struct Obj { int pad0; unsigned int flags; int pad8[3]; unsigned int count; char *entries[1]; } Obj;
extern Obj *D_00244CCC;
extern int D_00240088;
extern unsigned char D_00244CB6;
char *func_0B91F8(unsigned int index)
{
    Obj *o = D_00244CCC;
    unsigned int sel = index;
    int ov;
    unsigned int flag;
    char *p;
    if (o == 0) return 0;
    ov = D_00240088;
    flag = o->flags & 1;
    D_00244CB6 = flag;
    if (ov != -1) sel = ov;
    if (flag == 0) return 0;
    if ((o->flags & 2) == 0) return 0;
    p = (char *)o->entries;
    if (sel >= o->count) return 0;
    p = ((char **)p)[sel];
    p += 8;
    return p;
}
