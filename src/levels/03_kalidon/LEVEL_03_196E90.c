/* LEVEL_03:0x196E90 -- when the global flag byte is clear and a helper result is small, clears a byte of the object and returns 1; otherwise returns -1. */
typedef struct { char pad00[0x10513]; unsigned char flag; } Globals;
typedef struct { char pad00[0x46]; unsigned char b46; } Obj;
extern Globals *D_0020C62C;
extern int func_027600(void);

int func_196E90(Obj *o)
{
    if (D_0020C62C->flag != 0 || (unsigned int)func_027600() >= 4) {
        return -1;
    }
    o->b46 = 0;
    return 1;
}
