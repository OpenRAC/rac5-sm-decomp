/* LEVEL_23:0x13ADE8 -- placement copy of LEVEL_22_113A30.c: runs the handler for the object's state byte (1 or 2). */
extern void func_13C568(void *o);
extern void func_13C9C8(void *o);

void func_13ADE8(char *o)
{
    switch (*(unsigned char *)(o + 0x45)) {
    case 1:
        func_13C568(o);
        break;
    case 2:
        func_13C9C8(o);
        break;
    case 0:
        break;
    }
}
