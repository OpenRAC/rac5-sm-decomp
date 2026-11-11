/* LEVEL_02:0x166B00 -- bumps a byte counter in a child record and compares it with a limit. */
typedef struct { char p[0x1C]; char *n; char q[0x2C]; int z; char r[0xD]; unsigned char c; } C;
typedef struct { char p[0x14]; unsigned short lim; } N;
typedef struct { char p[0x54]; C *child; } O;
int func_166B00(O *o)
{
    C *child = o->child;
    child->z = 0;
    child->c++;
    return child->c < ((N *)child->n)->lim;
}
