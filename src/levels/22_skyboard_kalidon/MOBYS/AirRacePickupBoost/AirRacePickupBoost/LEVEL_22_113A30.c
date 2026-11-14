/* LEVEL_22:0x113A30 -- runs the handler for the object's state byte (1 or 2). */
extern void func_1151B0(void *o);
extern void func_115610(void *o);

void func_113A30(char *o)
{
    switch (*(unsigned char *)(o + 0x45)) {
    case 1:
        func_1151B0(o);
        break;
    case 2:
        func_115610(o);
        break;
    case 0:
        break;
    }
}
