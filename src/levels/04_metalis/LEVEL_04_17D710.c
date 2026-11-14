/* LEVEL_04:0x17D710 -- placement copy of LEVEL_01_170218.c: runs func_09A718 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_09A718(char *record);

void func_17D710(Obj *o)
{
    char *record = o->record;

    func_09A718(record + 0x64);
    func_09A718(record + 0x80);
}
