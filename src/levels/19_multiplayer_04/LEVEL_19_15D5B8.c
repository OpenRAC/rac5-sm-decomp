/* LEVEL_19:0x15D5B8 -- when the record's flag byte is set, runs func_0EC530 on its embedded block and clears the flag. */
typedef struct {
    char pad00[0x58];
    unsigned char *rec;
} Obj;

extern void func_0EC530(char *record);

void func_15D5B8(Obj *o)
{
    unsigned char *rec = o->rec;

    if (rec[0x388] != 0) {
        func_0EC530((char *)rec + 0x2EC);
        rec[0x388] = 0;
    }
}
