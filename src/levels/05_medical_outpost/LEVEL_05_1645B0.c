/* LEVEL_05:0x1645B0 -- placement copy of LEVEL_01_170218.c: runs func_094C80 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_094C80(char *record);

void func_1645B0(Obj *o)
{
    char *record = o->record;

    func_094C80(record + 0x64);
    func_094C80(record + 0x80);
}
