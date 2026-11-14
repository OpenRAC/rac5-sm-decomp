/* LEVEL_09:0x163B18 -- placement copy of LEVEL_01_170218.c: runs func_093EA0 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_093EA0(char *record);

void func_163B18(Obj *o)
{
    char *record = o->record;

    func_093EA0(record + 0x64);
    func_093EA0(record + 0x80);
}
