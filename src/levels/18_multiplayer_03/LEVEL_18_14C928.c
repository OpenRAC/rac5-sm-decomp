/* LEVEL_18:0x14C928 -- placement copy of LEVEL_01_170218.c: runs func_087AD8 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_087AD8(char *record);

void func_14C928(Obj *o)
{
    char *record = o->record;

    func_087AD8(record + 0x64);
    func_087AD8(record + 0x80);
}
