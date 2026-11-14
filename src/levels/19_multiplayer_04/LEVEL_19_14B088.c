/* LEVEL_19:0x14B088 -- placement copy of LEVEL_01_170218.c: runs func_088640 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_088640(char *record);

void func_14B088(Obj *o)
{
    char *record = o->record;

    func_088640(record + 0x64);
    func_088640(record + 0x80);
}
