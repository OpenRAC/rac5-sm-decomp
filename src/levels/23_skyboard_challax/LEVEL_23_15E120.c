/* LEVEL_23:0x15E120 -- placement copy of LEVEL_01_170218.c: runs func_08CFA8 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_08CFA8(char *record);

void func_15E120(Obj *o)
{
    char *record = o->record;

    func_08CFA8(record + 0x64);
    func_08CFA8(record + 0x80);
}
