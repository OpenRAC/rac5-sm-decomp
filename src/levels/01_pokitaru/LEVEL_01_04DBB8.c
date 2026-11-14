/* LEVEL_01:0x04DBB8 -- clears a halfword of the record, then calls the state helper with the first non-empty of two state words. */
typedef struct { char pad00[0x102]; unsigned short h102; } Obj;
extern void func_023BC8(Obj *o, int state);

void func_04DBB8(char *record)
{
    int first;

    *(unsigned short *)(record + 0x102) = 0;
    first = *(int *)(record + 0xDB4);
    if (first != 0) {
        func_023BC8((Obj *)record, first);
    } else {
        func_023BC8((Obj *)record, *(int *)(record + 0x9A8));
    }
}
