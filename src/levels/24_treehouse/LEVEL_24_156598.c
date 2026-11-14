/* LEVEL_24:0x156598 -- placement copy of LEVEL_01_170218.c: runs func_090548 on two sub-records of the attached record. */
typedef struct {
    char pad00[0x58];
    char *record;
} Obj;

extern void func_090548(char *record);

void func_156598(Obj *o)
{
    char *record = o->record;

    func_090548(record + 0x64);
    func_090548(record + 0x80);
}
