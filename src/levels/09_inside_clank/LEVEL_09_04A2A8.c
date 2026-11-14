/* LEVEL_09:0x04A2A8 -- placement copy of LEVEL_01_04DBB8.c: clears a halfword of the record, then calls the state helper with the first non-empty of two state words. */
typedef struct { char pad00[0x102]; unsigned short h102; } Obj;
extern void func_022D58(Obj *o, int state);

void func_04A2A8(char *record)
{
    int first;

    *(unsigned short *)(record + 0x102) = 0;
    first = *(int *)(record + 0xDB4);
    if (first != 0) {
        func_022D58((Obj *)record, first);
    } else {
        func_022D58((Obj *)record, *(int *)(record + 0x9A8));
    }
}
