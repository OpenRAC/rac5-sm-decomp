/* LEVEL_06:0x15F458 -- placement copy of LEVEL_01_170218.c: runs func_090300 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_090300(char *record);

void func_15F458(Obj *o)
{
    char *record = o->record;

    func_090300(record + 0x64);
    func_090300(record + 0x80);
}
