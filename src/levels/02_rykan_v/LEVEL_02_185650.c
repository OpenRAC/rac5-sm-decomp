/* LEVEL_02:0x185650 -- placement copy of LEVEL_01_170218.c: runs func_09DCF0 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_09DCF0(char *record);

void func_185650(Obj *o)
{
    char *record = o->record;

    func_09DCF0(record + 0x64);
    func_09DCF0(record + 0x80);
}
