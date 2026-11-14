/* LEVEL_17:0x147288 -- placement copy of LEVEL_01_170218.c: runs func_088BD0 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_088BD0(char *record);

void func_147288(Obj *o)
{
    char *record = o->record;

    func_088BD0(record + 0x64);
    func_088BD0(record + 0x80);
}
