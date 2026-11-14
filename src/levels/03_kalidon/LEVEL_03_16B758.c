/* LEVEL_03:0x16B758 -- placement copy of LEVEL_01_170218.c: runs func_097378 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_097378(char *record);

void func_16B758(Obj *o)
{
    char *record = o->record;

    func_097378(record + 0x64);
    func_097378(record + 0x80);
}
