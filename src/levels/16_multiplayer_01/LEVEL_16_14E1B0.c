/* LEVEL_16:0x14E1B0 -- placement copy of LEVEL_01_170218.c: runs func_088190 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_088190(char *record);

void func_14E1B0(Obj *o)
{
    char *record = o->record;

    func_088190(record + 0x64);
    func_088190(record + 0x80);
}
