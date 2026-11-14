/* LEVEL_10:0x16D948 -- placement copy of LEVEL_01_170218.c: runs func_097AB8 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_097AB8(char *record);

void func_16D948(Obj *o)
{
    char *record = o->record;

    func_097AB8(record + 0x64);
    func_097AB8(record + 0x80);
}
